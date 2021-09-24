/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.1.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionLOGIN;
    QAction *actionINITIATE_UPLOAD;
    QAction *actionSTOP_UPLOAD;
    QAction *actionSIGN_OFF;
    QAction *actionUSER_DATA;
    QAction *actionADDRESS_WALLETT;
    QAction *actionENGLISH;
    QAction *actionSPANISH;
    QAction *actionFRENCH;
    QAction *actionGRAPHIC;
    QAction *actionNUMERIC;
    QAction *actionCONFIGURE_W_FI;
    QAction *actionCONFIGURE_SERVER;
    QAction *actionSEARCH_UPDATES;
    QAction *actionCONNECTION_PROPERTIES;
    QAction *actionABOUT_CLORELA_OS;
    QAction *actionABOUT_WALCORG;
    QAction *actionREPORT_A_PROBLEM;
    QWidget *centralwidget;
    QMenuBar *menubar;
    QMenu *menuACCOUNT;
    QMenu *menuMY_PROFILE;
    QMenu *menuINTERFACE;
    QMenu *menuLANGUAGE;
    QMenu *menuGRAPHIC_INTERFACE;
    QMenu *menuSETTINGS;
    QMenu *menuOPTIONS;
    QMenu *menuHELP;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionLOGIN = new QAction(MainWindow);
        actionLOGIN->setObjectName(QString::fromUtf8("actionLOGIN"));
        actionINITIATE_UPLOAD = new QAction(MainWindow);
        actionINITIATE_UPLOAD->setObjectName(QString::fromUtf8("actionINITIATE_UPLOAD"));
        actionSTOP_UPLOAD = new QAction(MainWindow);
        actionSTOP_UPLOAD->setObjectName(QString::fromUtf8("actionSTOP_UPLOAD"));
        actionSIGN_OFF = new QAction(MainWindow);
        actionSIGN_OFF->setObjectName(QString::fromUtf8("actionSIGN_OFF"));
        actionUSER_DATA = new QAction(MainWindow);
        actionUSER_DATA->setObjectName(QString::fromUtf8("actionUSER_DATA"));
        actionADDRESS_WALLETT = new QAction(MainWindow);
        actionADDRESS_WALLETT->setObjectName(QString::fromUtf8("actionADDRESS_WALLETT"));
        actionENGLISH = new QAction(MainWindow);
        actionENGLISH->setObjectName(QString::fromUtf8("actionENGLISH"));
        actionSPANISH = new QAction(MainWindow);
        actionSPANISH->setObjectName(QString::fromUtf8("actionSPANISH"));
        actionFRENCH = new QAction(MainWindow);
        actionFRENCH->setObjectName(QString::fromUtf8("actionFRENCH"));
        actionGRAPHIC = new QAction(MainWindow);
        actionGRAPHIC->setObjectName(QString::fromUtf8("actionGRAPHIC"));
        actionNUMERIC = new QAction(MainWindow);
        actionNUMERIC->setObjectName(QString::fromUtf8("actionNUMERIC"));
        actionCONFIGURE_W_FI = new QAction(MainWindow);
        actionCONFIGURE_W_FI->setObjectName(QString::fromUtf8("actionCONFIGURE_W_FI"));
        actionCONFIGURE_SERVER = new QAction(MainWindow);
        actionCONFIGURE_SERVER->setObjectName(QString::fromUtf8("actionCONFIGURE_SERVER"));
        actionSEARCH_UPDATES = new QAction(MainWindow);
        actionSEARCH_UPDATES->setObjectName(QString::fromUtf8("actionSEARCH_UPDATES"));
        actionCONNECTION_PROPERTIES = new QAction(MainWindow);
        actionCONNECTION_PROPERTIES->setObjectName(QString::fromUtf8("actionCONNECTION_PROPERTIES"));
        actionABOUT_CLORELA_OS = new QAction(MainWindow);
        actionABOUT_CLORELA_OS->setObjectName(QString::fromUtf8("actionABOUT_CLORELA_OS"));
        actionABOUT_WALCORG = new QAction(MainWindow);
        actionABOUT_WALCORG->setObjectName(QString::fromUtf8("actionABOUT_WALCORG"));
        actionREPORT_A_PROBLEM = new QAction(MainWindow);
        actionREPORT_A_PROBLEM->setObjectName(QString::fromUtf8("actionREPORT_A_PROBLEM"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuACCOUNT = new QMenu(menubar);
        menuACCOUNT->setObjectName(QString::fromUtf8("menuACCOUNT"));
        menuMY_PROFILE = new QMenu(menuACCOUNT);
        menuMY_PROFILE->setObjectName(QString::fromUtf8("menuMY_PROFILE"));
        menuINTERFACE = new QMenu(menubar);
        menuINTERFACE->setObjectName(QString::fromUtf8("menuINTERFACE"));
        menuLANGUAGE = new QMenu(menuINTERFACE);
        menuLANGUAGE->setObjectName(QString::fromUtf8("menuLANGUAGE"));
        menuGRAPHIC_INTERFACE = new QMenu(menuINTERFACE);
        menuGRAPHIC_INTERFACE->setObjectName(QString::fromUtf8("menuGRAPHIC_INTERFACE"));
        menuSETTINGS = new QMenu(menubar);
        menuSETTINGS->setObjectName(QString::fromUtf8("menuSETTINGS"));
        menuOPTIONS = new QMenu(menubar);
        menuOPTIONS->setObjectName(QString::fromUtf8("menuOPTIONS"));
        menuHELP = new QMenu(menubar);
        menuHELP->setObjectName(QString::fromUtf8("menuHELP"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuACCOUNT->menuAction());
        menubar->addAction(menuINTERFACE->menuAction());
        menubar->addAction(menuSETTINGS->menuAction());
        menubar->addAction(menuOPTIONS->menuAction());
        menubar->addAction(menuHELP->menuAction());
        menuACCOUNT->addAction(actionLOGIN);
        menuACCOUNT->addAction(menuMY_PROFILE->menuAction());
        menuACCOUNT->addAction(actionINITIATE_UPLOAD);
        menuACCOUNT->addAction(actionSTOP_UPLOAD);
        menuACCOUNT->addAction(actionSIGN_OFF);
        menuMY_PROFILE->addAction(actionUSER_DATA);
        menuMY_PROFILE->addAction(actionADDRESS_WALLETT);
        menuINTERFACE->addAction(menuGRAPHIC_INTERFACE->menuAction());
        menuINTERFACE->addAction(menuLANGUAGE->menuAction());
        menuLANGUAGE->addAction(actionENGLISH);
        menuLANGUAGE->addAction(actionSPANISH);
        menuLANGUAGE->addAction(actionFRENCH);
        menuGRAPHIC_INTERFACE->addAction(actionGRAPHIC);
        menuGRAPHIC_INTERFACE->addAction(actionNUMERIC);
        menuSETTINGS->addAction(actionCONFIGURE_W_FI);
        menuSETTINGS->addAction(actionCONFIGURE_SERVER);
        menuOPTIONS->addAction(actionSEARCH_UPDATES);
        menuOPTIONS->addAction(actionCONNECTION_PROPERTIES);
        menuHELP->addAction(actionABOUT_CLORELA_OS);
        menuHELP->addAction(actionABOUT_WALCORG);
        menuHELP->addAction(actionREPORT_A_PROBLEM);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionLOGIN->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
        actionINITIATE_UPLOAD->setText(QCoreApplication::translate("MainWindow", "INITIATE UPLOAD", nullptr));
        actionSTOP_UPLOAD->setText(QCoreApplication::translate("MainWindow", "STOP UPLOAD", nullptr));
        actionSIGN_OFF->setText(QCoreApplication::translate("MainWindow", "SIGN OFF", nullptr));
        actionUSER_DATA->setText(QCoreApplication::translate("MainWindow", "USER DATA", nullptr));
        actionADDRESS_WALLETT->setText(QCoreApplication::translate("MainWindow", "ADDRESS WALLETT", nullptr));
        actionENGLISH->setText(QCoreApplication::translate("MainWindow", "ENGLISH", nullptr));
        actionSPANISH->setText(QCoreApplication::translate("MainWindow", "SPANISH", nullptr));
        actionFRENCH->setText(QCoreApplication::translate("MainWindow", "FRENCH", nullptr));
        actionGRAPHIC->setText(QCoreApplication::translate("MainWindow", "GRAPHIC", nullptr));
        actionNUMERIC->setText(QCoreApplication::translate("MainWindow", "NUMERIC", nullptr));
        actionCONFIGURE_W_FI->setText(QCoreApplication::translate("MainWindow", "CONFIGURE WI-FI", nullptr));
        actionCONFIGURE_SERVER->setText(QCoreApplication::translate("MainWindow", "CONFIGURE SERVER", nullptr));
        actionSEARCH_UPDATES->setText(QCoreApplication::translate("MainWindow", "SEARCH UPDATES", nullptr));
        actionCONNECTION_PROPERTIES->setText(QCoreApplication::translate("MainWindow", "CONNECTION PROPERTIES", nullptr));
        actionABOUT_CLORELA_OS->setText(QCoreApplication::translate("MainWindow", "ABOUT CLORELA OS", nullptr));
        actionABOUT_WALCORG->setText(QCoreApplication::translate("MainWindow", "ABOUT WALCORG", nullptr));
        actionREPORT_A_PROBLEM->setText(QCoreApplication::translate("MainWindow", "REPORT A PROBLEM", nullptr));
        menuACCOUNT->setTitle(QCoreApplication::translate("MainWindow", "ACCOUNT", nullptr));
        menuMY_PROFILE->setTitle(QCoreApplication::translate("MainWindow", "MY PROFILE", nullptr));
        menuINTERFACE->setTitle(QCoreApplication::translate("MainWindow", "INTERFACE", nullptr));
        menuLANGUAGE->setTitle(QCoreApplication::translate("MainWindow", "LANGUAGE", nullptr));
        menuGRAPHIC_INTERFACE->setTitle(QCoreApplication::translate("MainWindow", "GRAPHIC INTERFACE", nullptr));
        menuSETTINGS->setTitle(QCoreApplication::translate("MainWindow", "SETTINGS", nullptr));
        menuOPTIONS->setTitle(QCoreApplication::translate("MainWindow", "OPTIONS", nullptr));
        menuHELP->setTitle(QCoreApplication::translate("MainWindow", "HELP", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
