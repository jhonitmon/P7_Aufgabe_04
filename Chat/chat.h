#ifndef CHAT_H
#define CHAT_H

#include <QMainWindow>
#include <QPainter>
#include <QMessageBox>
#include <QLabel>
#include <QTcpSocket>

namespace Ui {
class Chat;
}

class Chat : public QMainWindow
{
    Q_OBJECT

public:
    explicit Chat(QWidget *parent = 0);
    void add_circ(QLabel * labels[6],int x);
    int splrnmrint = 0;
    QString aktsplr;
    ~Chat();

private slots:
    void on_BtVerbinden_clicked();
    void on_BtSenden_clicked();
    void updateChat();
    void isConnected();
    void on_LeText_returnPressed();
    void on_BtTrennen_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::Chat *ui;
    QTcpSocket tcpClient;
};

#endif // CHAT_H
