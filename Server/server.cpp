#include "server.h"
#include "ui_server.h"

Server::Server(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Server)
{
    nummer = 0;
    Spieler spieler1;
    Spieler spieler2;
    spieler1.setzeNummer(1);
    spieler2.setzeNummer(2);
    spieler[0] = spieler1;
    spieler[1] = spieler2;


    aktuellerSpieler = spieler[0].gibNummer();

    ui->setupUi(this);
    //Server starten: Nimmt Verbindungen von allen 
    //Adressen auf Port 1234 an.
    //Funktioniert auch mit IPv6
    tcpServer.listen(QHostAddress::Any, 1234);

    //Bei neuer Verbindung, Verbindung annehmen
    connect(&tcpServer, SIGNAL(newConnection()), 
            this, SLOT(acceptConnection()));

    ("Server gestartet!");
}

Server::~Server()
{
    delete ui;
}

//Verbindung annehmen und verarbeiten
void Server::acceptConnection()
{
    //Server gibt Pointer auf Socket mit neuer Verbindung zurück
    QTcpSocket* newConnection = tcpServer.nextPendingConnection();

    //neue Verbindung in Liste von Verbindungen aufnehmen
    tcpServerConnections.push_back(newConnection);

    //neue Verbindung mit Slots verbinden und Meldung ausgeben
    connect(newConnection, SIGNAL(readyRead()), 
            this, SLOT(updateChat()));
    connect(newConnection, 
            SIGNAL(stateChanged(QAbstractSocket::SocketState)),
            this, 
            SLOT(handleStateChange(QAbstractSocket::SocketState)));

    //Meldung ausgeben
    ui->textEdit->append("Ein neuer Client wurde verbunden!");
    ui->textEdit->append("Anzahl der verbundenen Clients: " + 
                QString::number(tcpServerConnections.size()));

    splrzahl++;
    if(aktuellerSpieler == 0){
        aktuellerSpieler = 1;
    }
    newConnection->write("#" + QString::number(splrzahl).toUtf8());
    newConnection->write("/" + QString::number(aktuellerSpieler).toUtf8());
}

//Chatverlauf aktualisierenz
void Server::updateChat()
{
    QString text;
    QRegExp user("^@(.*)$");
    QRegExp message("^([^:]+): (.*)$");
    QRegExp remove("^/(@.*)$");
    QRegExp zug("^%(.*)$");
    QRegExp gewinnerreg("!(.)");
    //Von jedem Clienten neue Nachrichten abfragen...

    for(unsigned int i = 0; i< tcpServerConnections.size(); i++)
    {
        text = tcpServerConnections[i]->readAll();
        if(text != ""){
            if(user.indexIn(text) != -1){
                nicks.append(text);

            } else if(remove.indexIn(text) != -1){
                QString rem = remove.cap(1);
                nicks.remove(rem);
            } else if(zug.indexIn(text) != -1){
                QString spal = zug.cap(1);
                if(spal == "1"){
                    QLabel * ls[6] = {ui->l10,ui->l11,ui->l12,ui->l13,ui->l14,ui->l15};
                    make_move(ls,1);
                } else if(spal == "2"){
                    QLabel * ls[6] = {ui->l20,ui->l21,ui->l22,ui->l23,ui->l24,ui->l25};
                    make_move(ls,2);
                } else if(spal == "3"){
                    QLabel * ls[6] = {ui->l30,ui->l31,ui->l32,ui->l33,ui->l34,ui->l35};
                    make_move(ls,3);
                } else if(spal == "4"){
                    QLabel * ls[6] = {ui->l40,ui->l41,ui->l42,ui->l43,ui->l44,ui->l45};
                    make_move(ls,4);
                } else if(spal == "5"){
                    QLabel * ls[6] = {ui->l50,ui->l51,ui->l52,ui->l53,ui->l54,ui->l55};
                    make_move(ls,5);
                } else if(spal == "6"){
                    QLabel * ls[6] = {ui->l60,ui->l61,ui->l62,ui->l63,ui->l64,ui->l65};
                    make_move(ls,6);
                } else if(spal == "7"){
                    QLabel * ls[6] = {ui->l70,ui->l71,ui->l72,ui->l73,ui->l74,ui->l75};
                    make_move(ls,7);
                }

            }
            if(gewinnerreg.indexIn(text) != -1){
                counter++;
                gewinner = 0;
                feld = Spielfeld();
                if(counter == 2){
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
                    counter = 0;

                }
            }
            for(int j=0;j<tcpServerConnections.size(); j++)
            {
                tcpServerConnections[j]->write("/" + QString::number(aktuellerSpieler).toUtf8());
                if(user.indexIn(text) != -1 || remove.indexIn(text) != -1){
                    tcpServerConnections[j]->write(nicks.toUtf8());
                } else if(message.indexIn(text) != -1) {
                    tcpServerConnections[j]->write(text.toUtf8());

                }

            }
            if(message.indexIn(text) != -1){
                ui->textEdit->append(text);
            }
        }

    }
}


//Behandlung von Statusänderungen der Verbindung
void Server::handleStateChange(QAbstractSocket::SocketState socketState){

    //Wenn eine Verbindung getrennt wurde...
    if(socketState == QAbstractSocket::UnconnectedState){

        //...ermitteln welche Verbindung getrennt wurde...
        for(int i=0; i < tcpServerConnections.size(); i++){
            if(tcpServerConnections[i]->state() == QAbstractSocket::UnconnectedState){
                //...und aus Liste entfernen.
                tcpServerConnections.erase(tcpServerConnections.begin()+i);
                ui->textEdit->append("Die Verbindung zu einem Client wurde getrennt");
                splrzahl--;
                updateChat();
            }
        }
    }
    //Behandlung weiterer Stadien hier ebenfalls möglich
}

bool Server::spielauswertung(int last_x, int last_y, int spielernummer) {
    aktuellerSpieler = spielernummer;
    int counter = 1;
    int counter2 = 1;
    int counter3 = 1;
    int counter4 = 1;

        if(feld.belegung(last_x, last_y + 1) == spielernummer) {
            counter++;
            for(int i = 2; i < 4 ; i++) {
                if(feld.belegung(last_x, last_y + i) == spielernummer) {
                    counter++;
                   } else break;
            }
        }
        if(feld.belegung(last_x + 1, last_y) == spielernummer ) {
            counter2++;
            for(int i = 2; i < 4 ; i++) {
                if(feld.belegung(last_x + i, last_y) == spielernummer) {
                    counter2++;
                   } else break;
            }
        }
        if(feld.belegung(last_x - 1, last_y) == spielernummer ) {
            counter2++;
            for(int i = 2; i < 4 ; i++) {
                if(feld.belegung(last_x - i, last_y) == spielernummer) {
                    counter2++;
                   } else break;
            }
        }
        if(feld.belegung(last_x + 1, last_y + 1) == spielernummer ) {
            counter4++;
            for(int i = 2; i < 4 ; i++) {
                if(feld.belegung(last_x + i, last_y + i) == spielernummer) {
                    counter4++;
                   } else break;
            }
        }
        if(feld.belegung(last_x + 1, last_y - 1) == spielernummer ) {
            counter3++;
            for(int i = 2; i < 4 ; i++) {
                if(feld.belegung(last_x + i, last_y - i) == spielernummer) {
                    counter3++;
                   } else break;
            }
        }
        if(feld.belegung(last_x - 1, last_y + 1) == spielernummer ) {
            counter3++;
            for(int i = 2; i < 4 ; i++) {
                if(feld.belegung(last_x - i, last_y + i) == spielernummer) {
                    counter3++;
                   } else break;
            }
        }
        if(feld.belegung(last_x - 1, last_y - 1) == spielernummer ) {
            counter4++;
            for(int i = 2; i < 4 ; i++) {
                if(feld.belegung(last_x - i, last_y - i) == spielernummer) {
                    counter4++;
                   } else break;
            }
        }
    if(counter == 4 || counter2 == 4 || counter3 == 4 || counter4 == 4) {
        return true;
    } else return false;
}

int Server::gibAktuellenSpieler() {
    return aktuellerSpieler;
}

int Server::gibGewinner() {
    return gewinner;
}

void Server::naechsterZug(int i) {
    spieler[nummer].macheZug(feld, i);
    if(spielauswertung(feld.getLastX(), feld.getLastY(), aktuellerSpieler) == 1) {
        if(spieler[nummer].gibNummer() / spieler[0].gibNummer() == 1) {
            aktuellerSpieler = spieler[1].gibNummer();
            nummer = 1;
        } else {
            aktuellerSpieler = spieler[0].gibNummer();
            nummer = 0;
        }
        gewinner = nummer + 1;
    } else {
        if(spieler[nummer].gibNummer() / spieler[0].gibNummer() == 1) {
            aktuellerSpieler = spieler[1].gibNummer();
            nummer = 1;
        } else {
            aktuellerSpieler = spieler[0].gibNummer();
            nummer = 0;
        }

    }

}


void Server::add_circ(QLabel * labels[6]) {
    QPixmap rcirc(59,54);
    rcirc.fill(Qt::transparent);
    QPainter painter(&rcirc);
    QRect rect = QRect(0,0,rcirc.width(),rcirc.height());
    if(nummer == 0){
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
}

void Server::make_move(QLabel * labels[6], int i){
    add_circ(labels);
    naechsterZug(i);
    for(int j=0;j<tcpServerConnections.size(); j++)
    {
        QString spalte = "%" + QString::number(i);
        tcpServerConnections[j]->write(spalte.toUtf8());
    }
    updateChat();
    if(gibGewinner() != 0) {
        for(int j=0;j<tcpServerConnections.size(); j++)
        {
            tcpServerConnections[j]->write("/" + QString::number(aktuellerSpieler).toUtf8());
            tcpServerConnections[j]->write("!" + QString::number(gewinner).toUtf8());
        }
    }
}

void Server::on_pushButton_clicked()
{
    QString textToSend = "Server: "
    + ui->LeText->text();
    for(int j=0;j<tcpServerConnections.size(); j++)
    {
        tcpServerConnections[j]->write(textToSend.toUtf8());

    }
    ui->textEdit->append(textToSend);
    ui->LeText->setText("");
}

