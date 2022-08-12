/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chat
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_3;
    QTextEdit *textEdit;
    QTextEdit *TeChat;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *LeIPAdresse;
    QLabel *label_2;
    QLineEdit *LePort;
    QLabel *label_3;
    QLineEdit *LeNick;
    QPushButton *BtVerbinden;
    QPushButton *BtTrennen;
    QHBoxLayout *horizontalLayout;
    QLineEdit *LeText;
    QPushButton *BtSenden;
    QVBoxLayout *verticalLayout;
    QLabel *spieler;
    QLabel *zug;
    QGridLayout *gridLayout_2;
    QLabel *l24;
    QLabel *l60;
    QPushButton *pushButton_4;
    QLabel *l45;
    QLabel *l23;
    QLabel *l71;
    QPushButton *pushButton_5;
    QLabel *l25;
    QLabel *l44;
    QLabel *l75;
    QLabel *l21;
    QLabel *l70;
    QPushButton *pushButton;
    QLabel *l42;
    QLabel *l51;
    QPushButton *pushButton_6;
    QLabel *l30;
    QLabel *l13;
    QLabel *l41;
    QLabel *l63;
    QLabel *l12;
    QLabel *l52;
    QLabel *l14;
    QPushButton *pushButton_7;
    QLabel *l65;
    QLabel *l31;
    QLabel *l15;
    QLabel *l61;
    QLabel *l74;
    QLabel *l11;
    QLabel *l53;
    QLabel *l55;
    QLabel *l10;
    QLabel *l35;
    QLabel *l34;
    QPushButton *pushButton_3;
    QLabel *l43;
    QLabel *l72;
    QLabel *l33;
    QLabel *l73;
    QLabel *l54;
    QLabel *l22;
    QLabel *l32;
    QLabel *l20;
    QLabel *l62;
    QPushButton *pushButton_2;
    QLabel *l40;
    QLabel *l50;
    QLabel *l64;
    QLabel *title;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *Chat)
    {
        if (Chat->objectName().isEmpty())
            Chat->setObjectName(QString::fromUtf8("Chat"));
        Chat->resize(804, 652);
        Chat->setAutoFillBackground(false);
        centralWidget = new QWidget(Chat);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout_2 = new QHBoxLayout(centralWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setEnabled(true);
        textEdit->setReadOnly(true);

        gridLayout_3->addWidget(textEdit, 4, 1, 1, 1);

        TeChat = new QTextEdit(centralWidget);
        TeChat->setObjectName(QString::fromUtf8("TeChat"));
        TeChat->setReadOnly(true);

        gridLayout_3->addWidget(TeChat, 4, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        LeIPAdresse = new QLineEdit(centralWidget);
        LeIPAdresse->setObjectName(QString::fromUtf8("LeIPAdresse"));

        horizontalLayout_3->addWidget(LeIPAdresse);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        LePort = new QLineEdit(centralWidget);
        LePort->setObjectName(QString::fromUtf8("LePort"));

        horizontalLayout_3->addWidget(LePort);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        LeNick = new QLineEdit(centralWidget);
        LeNick->setObjectName(QString::fromUtf8("LeNick"));

        horizontalLayout_3->addWidget(LeNick);

        BtVerbinden = new QPushButton(centralWidget);
        BtVerbinden->setObjectName(QString::fromUtf8("BtVerbinden"));

        horizontalLayout_3->addWidget(BtVerbinden);

        BtTrennen = new QPushButton(centralWidget);
        BtTrennen->setObjectName(QString::fromUtf8("BtTrennen"));

        horizontalLayout_3->addWidget(BtTrennen);


        gridLayout_3->addLayout(horizontalLayout_3, 2, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        LeText = new QLineEdit(centralWidget);
        LeText->setObjectName(QString::fromUtf8("LeText"));

        horizontalLayout->addWidget(LeText);

        BtSenden = new QPushButton(centralWidget);
        BtSenden->setObjectName(QString::fromUtf8("BtSenden"));

        horizontalLayout->addWidget(BtSenden);


        gridLayout_3->addLayout(horizontalLayout, 7, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        spieler = new QLabel(centralWidget);
        spieler->setObjectName(QString::fromUtf8("spieler"));
        QFont font;
        font.setPointSize(26);
        spieler->setFont(font);

        verticalLayout->addWidget(spieler);

        zug = new QLabel(centralWidget);
        zug->setObjectName(QString::fromUtf8("zug"));
        QFont font1;
        font1.setPointSize(24);
        zug->setFont(font1);

        verticalLayout->addWidget(zug);


        gridLayout_3->addLayout(verticalLayout, 0, 1, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(0);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        l24 = new QLabel(centralWidget);
        l24->setObjectName(QString::fromUtf8("l24"));
        l24->setMinimumSize(QSize(54, 59));
        l24->setFrameShape(QFrame::Box);
        l24->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l24, 3, 1, 1, 1);

        l60 = new QLabel(centralWidget);
        l60->setObjectName(QString::fromUtf8("l60"));
        l60->setMinimumSize(QSize(54, 59));
        l60->setFrameShape(QFrame::Box);
        l60->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l60, 7, 5, 1, 1);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setIconSize(QSize(10, 16));

        gridLayout_2->addWidget(pushButton_4, 1, 3, 1, 1);

        l45 = new QLabel(centralWidget);
        l45->setObjectName(QString::fromUtf8("l45"));
        l45->setMinimumSize(QSize(54, 59));
        l45->setFrameShape(QFrame::Box);
        l45->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l45, 2, 3, 1, 1);

        l23 = new QLabel(centralWidget);
        l23->setObjectName(QString::fromUtf8("l23"));
        l23->setMinimumSize(QSize(54, 59));
        l23->setFrameShape(QFrame::Box);
        l23->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l23, 4, 1, 1, 1);

        l71 = new QLabel(centralWidget);
        l71->setObjectName(QString::fromUtf8("l71"));
        l71->setMinimumSize(QSize(54, 59));
        l71->setFrameShape(QFrame::Box);
        l71->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l71, 6, 6, 1, 1);

        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setIconSize(QSize(10, 16));

        gridLayout_2->addWidget(pushButton_5, 1, 4, 1, 1);

        l25 = new QLabel(centralWidget);
        l25->setObjectName(QString::fromUtf8("l25"));
        l25->setMinimumSize(QSize(54, 59));
        l25->setFrameShape(QFrame::Box);
        l25->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l25, 2, 1, 1, 1);

        l44 = new QLabel(centralWidget);
        l44->setObjectName(QString::fromUtf8("l44"));
        l44->setMinimumSize(QSize(54, 59));
        l44->setFrameShape(QFrame::Box);
        l44->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l44, 3, 3, 1, 1);

        l75 = new QLabel(centralWidget);
        l75->setObjectName(QString::fromUtf8("l75"));
        l75->setMinimumSize(QSize(54, 59));
        l75->setFrameShape(QFrame::Box);
        l75->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l75, 2, 6, 1, 1);

        l21 = new QLabel(centralWidget);
        l21->setObjectName(QString::fromUtf8("l21"));
        l21->setMinimumSize(QSize(54, 59));
        l21->setFrameShape(QFrame::Box);
        l21->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l21, 6, 1, 1, 1);

        l70 = new QLabel(centralWidget);
        l70->setObjectName(QString::fromUtf8("l70"));
        l70->setMinimumSize(QSize(54, 59));
        l70->setFrameShape(QFrame::Box);
        l70->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l70, 7, 6, 1, 1);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setIconSize(QSize(10, 16));

        gridLayout_2->addWidget(pushButton, 1, 0, 1, 1);

        l42 = new QLabel(centralWidget);
        l42->setObjectName(QString::fromUtf8("l42"));
        l42->setMinimumSize(QSize(54, 59));
        l42->setFrameShape(QFrame::Box);
        l42->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l42, 5, 3, 1, 1);

        l51 = new QLabel(centralWidget);
        l51->setObjectName(QString::fromUtf8("l51"));
        l51->setMinimumSize(QSize(54, 59));
        l51->setFrameShape(QFrame::Box);
        l51->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l51, 6, 4, 1, 1);

        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setIconSize(QSize(10, 16));

        gridLayout_2->addWidget(pushButton_6, 1, 5, 1, 1);

        l30 = new QLabel(centralWidget);
        l30->setObjectName(QString::fromUtf8("l30"));
        l30->setMinimumSize(QSize(54, 59));
        l30->setFrameShape(QFrame::Box);
        l30->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l30, 7, 2, 1, 1);

        l13 = new QLabel(centralWidget);
        l13->setObjectName(QString::fromUtf8("l13"));
        l13->setMinimumSize(QSize(54, 59));
        l13->setFrameShape(QFrame::Box);
        l13->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l13, 4, 0, 1, 1);

        l41 = new QLabel(centralWidget);
        l41->setObjectName(QString::fromUtf8("l41"));
        l41->setMinimumSize(QSize(54, 59));
        l41->setFrameShape(QFrame::Box);
        l41->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l41, 6, 3, 1, 1);

        l63 = new QLabel(centralWidget);
        l63->setObjectName(QString::fromUtf8("l63"));
        l63->setMinimumSize(QSize(54, 59));
        l63->setFrameShape(QFrame::Box);
        l63->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l63, 4, 5, 1, 1);

        l12 = new QLabel(centralWidget);
        l12->setObjectName(QString::fromUtf8("l12"));
        l12->setMinimumSize(QSize(54, 59));
        l12->setFrameShape(QFrame::Box);
        l12->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l12, 5, 0, 1, 1);

        l52 = new QLabel(centralWidget);
        l52->setObjectName(QString::fromUtf8("l52"));
        l52->setMinimumSize(QSize(54, 59));
        l52->setFrameShape(QFrame::Box);
        l52->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l52, 5, 4, 1, 1);

        l14 = new QLabel(centralWidget);
        l14->setObjectName(QString::fromUtf8("l14"));
        l14->setMinimumSize(QSize(54, 59));
        l14->setFrameShape(QFrame::Box);
        l14->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l14, 3, 0, 1, 1);

        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setIconSize(QSize(10, 16));

        gridLayout_2->addWidget(pushButton_7, 1, 6, 1, 1);

        l65 = new QLabel(centralWidget);
        l65->setObjectName(QString::fromUtf8("l65"));
        l65->setMinimumSize(QSize(54, 59));
        l65->setFrameShape(QFrame::Box);
        l65->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l65, 2, 5, 1, 1);

        l31 = new QLabel(centralWidget);
        l31->setObjectName(QString::fromUtf8("l31"));
        l31->setMinimumSize(QSize(54, 59));
        l31->setFrameShape(QFrame::Box);
        l31->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l31, 6, 2, 1, 1);

        l15 = new QLabel(centralWidget);
        l15->setObjectName(QString::fromUtf8("l15"));
        l15->setMinimumSize(QSize(54, 59));
        l15->setFrameShape(QFrame::Box);
        l15->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l15, 2, 0, 1, 1);

        l61 = new QLabel(centralWidget);
        l61->setObjectName(QString::fromUtf8("l61"));
        l61->setMinimumSize(QSize(54, 59));
        l61->setFrameShape(QFrame::Box);
        l61->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l61, 6, 5, 1, 1);

        l74 = new QLabel(centralWidget);
        l74->setObjectName(QString::fromUtf8("l74"));
        l74->setMinimumSize(QSize(54, 59));
        l74->setFrameShape(QFrame::Box);
        l74->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l74, 3, 6, 1, 1);

        l11 = new QLabel(centralWidget);
        l11->setObjectName(QString::fromUtf8("l11"));
        l11->setMinimumSize(QSize(54, 59));
        l11->setFrameShape(QFrame::Box);
        l11->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l11, 6, 0, 1, 1);

        l53 = new QLabel(centralWidget);
        l53->setObjectName(QString::fromUtf8("l53"));
        l53->setMinimumSize(QSize(54, 59));
        l53->setFrameShape(QFrame::Box);
        l53->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l53, 4, 4, 1, 1);

        l55 = new QLabel(centralWidget);
        l55->setObjectName(QString::fromUtf8("l55"));
        l55->setMinimumSize(QSize(54, 59));
        l55->setFrameShape(QFrame::Box);
        l55->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l55, 2, 4, 1, 1);

        l10 = new QLabel(centralWidget);
        l10->setObjectName(QString::fromUtf8("l10"));
        l10->setMinimumSize(QSize(54, 59));
        l10->setFrameShape(QFrame::Box);
        l10->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l10, 7, 0, 1, 1);

        l35 = new QLabel(centralWidget);
        l35->setObjectName(QString::fromUtf8("l35"));
        l35->setMinimumSize(QSize(54, 59));
        l35->setFrameShape(QFrame::Box);
        l35->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l35, 2, 2, 1, 1);

        l34 = new QLabel(centralWidget);
        l34->setObjectName(QString::fromUtf8("l34"));
        l34->setMinimumSize(QSize(54, 59));
        l34->setFrameShape(QFrame::Box);
        l34->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l34, 3, 2, 1, 1);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setIconSize(QSize(10, 16));

        gridLayout_2->addWidget(pushButton_3, 1, 2, 1, 1);

        l43 = new QLabel(centralWidget);
        l43->setObjectName(QString::fromUtf8("l43"));
        l43->setMinimumSize(QSize(54, 59));
        l43->setFrameShape(QFrame::Box);
        l43->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l43, 4, 3, 1, 1);

        l72 = new QLabel(centralWidget);
        l72->setObjectName(QString::fromUtf8("l72"));
        l72->setMinimumSize(QSize(54, 59));
        l72->setFrameShape(QFrame::Box);
        l72->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l72, 5, 6, 1, 1);

        l33 = new QLabel(centralWidget);
        l33->setObjectName(QString::fromUtf8("l33"));
        l33->setMinimumSize(QSize(54, 59));
        l33->setFrameShape(QFrame::Box);
        l33->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l33, 4, 2, 1, 1);

        l73 = new QLabel(centralWidget);
        l73->setObjectName(QString::fromUtf8("l73"));
        l73->setMinimumSize(QSize(54, 59));
        l73->setFrameShape(QFrame::Box);
        l73->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l73, 4, 6, 1, 1);

        l54 = new QLabel(centralWidget);
        l54->setObjectName(QString::fromUtf8("l54"));
        l54->setMinimumSize(QSize(54, 59));
        l54->setFrameShape(QFrame::Box);
        l54->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l54, 3, 4, 1, 1);

        l22 = new QLabel(centralWidget);
        l22->setObjectName(QString::fromUtf8("l22"));
        l22->setMinimumSize(QSize(54, 59));
        l22->setFrameShape(QFrame::Box);
        l22->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l22, 5, 1, 1, 1);

        l32 = new QLabel(centralWidget);
        l32->setObjectName(QString::fromUtf8("l32"));
        l32->setMinimumSize(QSize(54, 59));
        l32->setFrameShape(QFrame::Box);
        l32->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l32, 5, 2, 1, 1);

        l20 = new QLabel(centralWidget);
        l20->setObjectName(QString::fromUtf8("l20"));
        l20->setMinimumSize(QSize(54, 59));
        l20->setFrameShape(QFrame::Box);
        l20->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l20, 7, 1, 1, 1);

        l62 = new QLabel(centralWidget);
        l62->setObjectName(QString::fromUtf8("l62"));
        l62->setMinimumSize(QSize(54, 59));
        l62->setFrameShape(QFrame::Box);
        l62->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l62, 5, 5, 1, 1);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setIconSize(QSize(10, 16));

        gridLayout_2->addWidget(pushButton_2, 1, 1, 1, 1);

        l40 = new QLabel(centralWidget);
        l40->setObjectName(QString::fromUtf8("l40"));
        l40->setMinimumSize(QSize(54, 59));
        l40->setFrameShape(QFrame::Box);
        l40->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l40, 7, 3, 1, 1);

        l50 = new QLabel(centralWidget);
        l50->setObjectName(QString::fromUtf8("l50"));
        l50->setMinimumSize(QSize(54, 59));
        l50->setFrameShape(QFrame::Box);
        l50->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l50, 7, 4, 1, 1);

        l64 = new QLabel(centralWidget);
        l64->setObjectName(QString::fromUtf8("l64"));
        l64->setMinimumSize(QSize(54, 59));
        l64->setFrameShape(QFrame::Box);
        l64->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(l64, 3, 5, 1, 1);

        title = new QLabel(centralWidget);
        title->setObjectName(QString::fromUtf8("title"));
        QFont font2;
        font2.setPointSize(36);
        font2.setBold(true);
        font2.setWeight(75);
        title->setFont(font2);
        title->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(title, 0, 0, 1, 7);


        gridLayout_3->addLayout(gridLayout_2, 0, 0, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_3);

        Chat->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Chat);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 804, 21));
        Chat->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Chat);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Chat->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Chat);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Chat->setStatusBar(statusBar);
        toolBar = new QToolBar(Chat);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        Chat->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(Chat);

        QMetaObject::connectSlotsByName(Chat);
    } // setupUi

    void retranslateUi(QMainWindow *Chat)
    {
        Chat->setWindowTitle(QApplication::translate("Chat", "Chat", nullptr));
        label->setText(QApplication::translate("Chat", "IP-Adresse:", nullptr));
        label_2->setText(QApplication::translate("Chat", "Port:", nullptr));
        label_3->setText(QApplication::translate("Chat", "Nickname:", nullptr));
        BtVerbinden->setText(QApplication::translate("Chat", "Verbinden", nullptr));
        BtTrennen->setText(QApplication::translate("Chat", "Trennen", nullptr));
        BtSenden->setText(QApplication::translate("Chat", "Senden", nullptr));
        spieler->setText(QString());
        zug->setText(QString());
        l24->setText(QString());
        l60->setText(QString());
        pushButton_4->setText(QApplication::translate("Chat", "Spalte 4", nullptr));
        l45->setText(QString());
        l23->setText(QString());
        l71->setText(QString());
        pushButton_5->setText(QApplication::translate("Chat", "Spalte 5", nullptr));
        l25->setText(QString());
        l44->setText(QString());
        l75->setText(QString());
        l21->setText(QString());
        l70->setText(QString());
        pushButton->setText(QApplication::translate("Chat", "Spalte 1", nullptr));
        l42->setText(QString());
        l51->setText(QString());
        pushButton_6->setText(QApplication::translate("Chat", "Spalte 6", nullptr));
        l30->setText(QString());
        l13->setText(QString());
        l41->setText(QString());
        l63->setText(QString());
        l12->setText(QString());
        l52->setText(QString());
        l14->setText(QString());
        pushButton_7->setText(QApplication::translate("Chat", "Spalte 7", nullptr));
        l65->setText(QString());
        l31->setText(QString());
        l15->setText(QString());
        l61->setText(QString());
        l74->setText(QString());
        l11->setText(QString());
        l53->setText(QString());
        l55->setText(QString());
        l10->setText(QString());
        l35->setText(QString());
        l34->setText(QString());
        pushButton_3->setText(QApplication::translate("Chat", "Spalte 3", nullptr));
        l43->setText(QString());
        l72->setText(QString());
        l33->setText(QString());
        l73->setText(QString());
        l54->setText(QString());
        l22->setText(QString());
        l32->setText(QString());
        l20->setText(QString());
        l62->setText(QString());
        pushButton_2->setText(QApplication::translate("Chat", "Spalte 2", nullptr));
        l40->setText(QString());
        l50->setText(QString());
        l64->setText(QString());
        title->setText(QApplication::translate("Chat", "4-Gewinnt!", nullptr));
        toolBar->setWindowTitle(QApplication::translate("Chat", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Chat: public Ui_Chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
