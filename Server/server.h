#ifndef SERVER_H
#define SERVER_H

#include <QDialog>
#include <QLabel>
#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>
#include <vector>
#include <spielfeld.h>
#include <spieler.h>
#include <QPainter>
#include <QMessageBox>


namespace Ui {
class Server;
}

class Server : public QMainWindow
{
    Q_OBJECT

public:
    explicit Server(QWidget *parent = 0);
    ~Server();
    int gibAktuellenSpieler();
    int gibGewinner();
    void naechsterZug(int i);
    void setzeSpielernamen(int spielenummer, std::string spielername);
    bool spielauswertung(int last_x, int last_y, int spielernummer);
    void add_circ(QLabel * labels[6]);
    void make_move(QLabel * labels[6], int i);
    int splrzahl = 0;

public slots:
    void acceptConnection();
    void updateChat();
    void handleStateChange(QAbstractSocket::SocketState socketState);


private slots:
    void on_pushButton_clicked();

private:
    Ui::Server *ui;
    QTcpServer tcpServer;
    QString nicks;
    std::vector<QTcpSocket*> tcpServerConnections;
    int aktuellerSpieler, gewinner = 0, nummer,counter = 0;
    std::string name;
    Spieler spieler[2];
    Spielfeld feld;
};

#endif // SERVER_H
