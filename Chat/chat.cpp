#include "chat.h"
#include "ui_chat.h"

Chat::Chat(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Chat)
{
    ui->setupUi(this);

    //Trennen Button ausgrauen und Signal 
    //für neue Verbindung verbinden
    ui->BtTrennen->setEnabled(false);
    connect(&tcpClient, SIGNAL(connected()), 
    this, SLOT(isConnected()));
}

Chat::~Chat()
{
    //Verbindung beim Beenden schließen
    tcpClient.write("/@" + ui->LeNick->text().toUtf8());
    tcpClient.close();
    delete ui;
}

//Verbinden wird geklickt
void Chat::on_BtVerbinden_clicked()
{
    //Adresse, Port, Name aus GUI auslesen
    QString adresse = ui->LeIPAdresse->text();
    qint16 port = ui->LePort->text().toInt();
    QString nickname = ui->LeNick->text();

    //Wenn alle Felder gefüllt sind Verbindung aufbauen
    if(adresse != QString("") 
    && port != QString("") 
    && nickname != QString("")){

        tcpClient.connectToHost(adresse, port);
        connect(&tcpClient, SIGNAL(readyRead()), 
        this, SLOT(updateChat()));

    }else{
        //sonst, Fehler ausgeben
        ui->TeChat->append("Bitte IP-Adresse, Port und Nickname angeben!");
    }
}

//Senden wird geklickt
void Chat::on_BtSenden_clicked()
{
    //Text zusammenfügen, Senden und Eingabefeld leeren
    QString textToSend = ui->LeNick->text() + ": " 
    + ui->LeText->text();
    tcpClient.write(textToSend.toUtf8());
    ui->LeText->setText("");
}

//Chatverlauf aktualisieren
void Chat::updateChat()
{
    //neue Nachrichten vom Server lesen
    QString text = QString(tcpClient.read(5000));
    QRegExp message("^(\/[1-9])?(.+): (.*)$");
    QRegExp user("@(.*)");
    QRegExp zug("%(.)");
    QRegExp splr("\/(.)");
    QRegExp splrnmr("#(.)");
    QRegExp gewinner("!(.)");
    splrnmr.indexIn(text);

    if(splr.indexIn(text) != -1) {
        aktsplr = splr.cap(1);
    }

    if(splrnmrint == 0){
        splrnmrint = splrnmr.cap(1).toInt();
    }
    ui->spieler->setText("Spieler " + QString::number(splrnmrint));
    if(splrnmrint == 1){
        ui->spieler->setStyleSheet("color:red;");
    } else {
        ui->spieler->setStyleSheet("color:blue;");
    }

    if(splrnmrint != aktsplr.toInt()){
        ui->pushButton->setEnabled(false);
        ui->pushButton_2->setEnabled(false);
        ui->pushButton_3->setEnabled(false);
        ui->pushButton_4->setEnabled(false);
        ui->pushButton_5->setEnabled(false);
        ui->pushButton_6->setEnabled(false);
        ui->pushButton_7->setEnabled(false);
        ui->zug->setText("Spieler " + aktsplr + " ist am Zug!");
    } else {
        ui->pushButton->setEnabled(true);
        ui->pushButton_2->setEnabled(true);
        ui->pushButton_3->setEnabled(true);
        ui->pushButton_4->setEnabled(true);
        ui->pushButton_5->setEnabled(true);
        ui->pushButton_6->setEnabled(true);
        ui->pushButton_7->setEnabled(true);
        ui->zug->setText("Sie sind am Zug!");
    }
    if(text != ""){
        if(user.indexIn(text) != -1)
        {
            QStringList users = user.cap(1).split("@");
            ui->textEdit->clear();
            foreach(QString u,users){
                ui->textEdit->append(u);
            }
        } else if(message.indexIn(text) != -1) {
            //...und an alle senden wenn es eine Nachricht gibt
            text.remove(splr);
             ui->TeChat->append(text);


        } else if(zug.indexIn(text) != -1) {
            QString spal = zug.cap(1);

            if(spal == "1"){
                QLabel * ls[6] = {ui->l10,ui->l11,ui->l12,ui->l13,ui->l14,ui->l15};
                add_circ(ls,aktsplr.toInt());
            } else if(spal == "2"){
                QLabel * ls[6] = {ui->l20,ui->l21,ui->l22,ui->l23,ui->l24,ui->l25};
                add_circ(ls,aktsplr.toInt());
            } else if(spal == "3"){
                QLabel * ls[6] = {ui->l30,ui->l31,ui->l32,ui->l33,ui->l34,ui->l35};
                add_circ(ls,aktsplr.toInt());
            } else if(spal == "4"){
                QLabel * ls[6] = {ui->l40,ui->l41,ui->l42,ui->l43,ui->l44,ui->l45};
                add_circ(ls,aktsplr.toInt());
            } else if(spal == "5"){
                QLabel * ls[6] = {ui->l50,ui->l51,ui->l52,ui->l53,ui->l54,ui->l55};
                add_circ(ls,aktsplr.toInt());
            } else if(spal == "6"){
                QLabel * ls[6] = {ui->l60,ui->l61,ui->l62,ui->l63,ui->l64,ui->l65};
                add_circ(ls,aktsplr.toInt());
            } else if(spal == "7"){
                QLabel * ls[6] = {ui->l70,ui->l71,ui->l72,ui->l73,ui->l74,ui->l75};
                add_circ(ls,aktsplr.toInt());
            }

        }
        if(gewinner.indexIn(text) != -1) {
            QMessageBox warn;
            warn.setWindowTitle("");
            if(gewinner.cap(1).toInt() != splrnmrint){
                warn.setText("Sie haben gewonnen!\nMöchten Sie das Spiel wiederholen?");
            } else {
                warn.setText("Sie haben verloren!\nMöchten Sie das Spiel wiederholen?");
            }
            warn.setStandardButtons(QMessageBox::Yes);
            warn.addButton(QMessageBox::No);
            warn.setDefaultButton(QMessageBox::No);
            if(warn.exec() == QMessageBox::Yes){
                QLabel * labels[42] = {ui->l10,ui->l11,ui->l12,ui->l13,ui->l14,ui->l15,
                                      ui->l20,ui->l21,ui->l22,ui->l23,ui->l24,ui->l25,
                                      ui->l30,ui->l31,ui->l32,ui->l33,ui->l34,ui->l35,
                                      ui->l40,ui->l41,ui->l42,ui->l43,ui->l44,ui->l45,
                                      ui->l50,ui->l51,ui->l52,ui->l53,ui->l54,ui->l55,
                                      ui->l60,ui->l61,ui->l62,ui->l63,ui->l64,ui->l65,
                                      ui->l70,ui->l71,ui->l72,ui->l73,ui->l74,ui->l75};
                for(int i = 0; i < 42;i++){
                    labels[i]->clear();
                }
                ui->zug->clear();
                ui->spieler->clear();
                //splrnmrint = 0;
                //aktsplr = "0";
                tcpClient.write("!1");

                //Spiel spiel(spieler[0].gibNamen(),spieler[1].gibNamen());
                //spiel.setModal(true);
                //spiel.exec();
            } else {
                this->close();
                tcpClient.write("!2");
            }
        }


    }
}

//Verbindung wurde hergestellt
void Chat::isConnected(){
    ui->TeChat->append("Verbindung hergestellt!");
    tcpClient.write("@" + ui->LeNick->text().toUtf8());

    //Eingabefelder ausgrauen
    ui->LeIPAdresse->setEnabled(false);
    ui->LePort->setEnabled(false);
    ui->LeNick->setEnabled(false);
    ui->BtVerbinden->setEnabled(false);
    ui->BtTrennen->setEnabled(true);
}

//Eingabetaste zum Senden verwenden
void Chat::on_LeText_returnPressed()
{
    on_BtSenden_clicked();
}

//Trennen wird geklickt
void Chat::on_BtTrennen_clicked()
{
    //Verbindung trennen und Eingabefelder verfügbar machen
    tcpClient.write("/@" + ui->LeNick->text().toUtf8());
    tcpClient.close();
    ui->textEdit->clear();
    ui->LeIPAdresse->setEnabled(true);
    ui->LePort->setEnabled(true);
    ui->LeNick->setEnabled(true);
    ui->BtVerbinden->setEnabled(true);
    ui->BtTrennen->setEnabled(false);
}

void Chat::on_pushButton_clicked()
{
    tcpClient.write("%1");
}


void Chat::on_pushButton_2_clicked()
{
    tcpClient.write("%2");
}

void Chat::on_pushButton_3_clicked()
{
    tcpClient.write("%3");
}

void Chat::on_pushButton_4_clicked()
{
    tcpClient.write("%4");
}

void Chat::on_pushButton_5_clicked()
{
    tcpClient.write("%5");
}

void Chat::on_pushButton_6_clicked()
{
    tcpClient.write("%6");
}

void Chat::on_pushButton_7_clicked()
{
    tcpClient.write("%7");
}

void Chat::add_circ(QLabel * labels[6], int x) {
    QPixmap rcirc(58,53);
    rcirc.fill(Qt::transparent);
    QPainter painter(&rcirc);
    QRect rect = QRect(0,0,rcirc.width(),rcirc.height());

    if(x != 1){
        QBrush brush = QBrush(Qt::red);
        painter.setBrush(brush);
    } else{
        QBrush brush = QBrush(Qt::blue);
        painter.setBrush(brush);
    }
    painter.setPen(Qt::NoPen);
    painter.drawEllipse(rect);


    for(int i = 0; i < 6; i++) {
       if(!labels[i]->pixmap()){
           labels[i]->setPixmap(rcirc);
           break;
        }
    }
    updateChat();
}
