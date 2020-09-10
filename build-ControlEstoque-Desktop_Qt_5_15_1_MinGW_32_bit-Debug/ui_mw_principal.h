/********************************************************************************
** Form generated from reading UI file 'mw_principal.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MW_PRINCIPAL_H
#define UI_MW_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mw_principal
{
public:
    QAction *actionEstoque;
    QAction *actionColaboradores;
    QAction *actionVendas;
    QAction *actionSobre;
    QAction *actionSair;
    QWidget *centralwidget;
    QPushButton *btn_bloquear;
    QPushButton *pushButton_2;
    QLabel *lb_nome;
    QMenuBar *menubar;
    QMenu *menuGest_o;
    QMenu *menuSistema;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mw_principal)
    {
        if (mw_principal->objectName().isEmpty())
            mw_principal->setObjectName(QString::fromUtf8("mw_principal"));
        mw_principal->setEnabled(true);
        mw_principal->resize(944, 692);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mw_principal->sizePolicy().hasHeightForWidth());
        mw_principal->setSizePolicy(sizePolicy);
        actionEstoque = new QAction(mw_principal);
        actionEstoque->setObjectName(QString::fromUtf8("actionEstoque"));
        actionColaboradores = new QAction(mw_principal);
        actionColaboradores->setObjectName(QString::fromUtf8("actionColaboradores"));
        actionVendas = new QAction(mw_principal);
        actionVendas->setObjectName(QString::fromUtf8("actionVendas"));
        actionSobre = new QAction(mw_principal);
        actionSobre->setObjectName(QString::fromUtf8("actionSobre"));
        actionSair = new QAction(mw_principal);
        actionSair->setObjectName(QString::fromUtf8("actionSair"));
        centralwidget = new QWidget(mw_principal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        btn_bloquear = new QPushButton(centralwidget);
        btn_bloquear->setObjectName(QString::fromUtf8("btn_bloquear"));
        btn_bloquear->setEnabled(true);
        btn_bloquear->setGeometry(QRect(10, 610, 32, 42));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(btn_bloquear->sizePolicy().hasHeightForWidth());
        btn_bloquear->setSizePolicy(sizePolicy1);
        btn_bloquear->setFlat(true);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(390, 40, 171, 41));
        pushButton_2->setStyleSheet(QString::fromUtf8("background:#248;\n"
"color:#fff;\n"
"font-size:16pt;\n"
"border:none;\n"
"border-radius: 10px;\n"
""));
        lb_nome = new QLabel(centralwidget);
        lb_nome->setObjectName(QString::fromUtf8("lb_nome"));
        lb_nome->setGeometry(QRect(60, 610, 70, 42));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lb_nome->sizePolicy().hasHeightForWidth());
        lb_nome->setSizePolicy(sizePolicy2);
        mw_principal->setCentralWidget(centralwidget);
        menubar = new QMenuBar(mw_principal);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 944, 21));
        menuGest_o = new QMenu(menubar);
        menuGest_o->setObjectName(QString::fromUtf8("menuGest_o"));
        menuSistema = new QMenu(menubar);
        menuSistema->setObjectName(QString::fromUtf8("menuSistema"));
        mw_principal->setMenuBar(menubar);
        statusbar = new QStatusBar(mw_principal);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        mw_principal->setStatusBar(statusbar);

        menubar->addAction(menuGest_o->menuAction());
        menubar->addAction(menuSistema->menuAction());
        menuGest_o->addSeparator();
        menuGest_o->addAction(actionEstoque);
        menuGest_o->addAction(actionColaboradores);
        menuGest_o->addAction(actionVendas);
        menuSistema->addAction(actionSobre);
        menuSistema->addAction(actionSair);

        retranslateUi(mw_principal);

        QMetaObject::connectSlotsByName(mw_principal);
    } // setupUi

    void retranslateUi(QMainWindow *mw_principal)
    {
        mw_principal->setWindowTitle(QCoreApplication::translate("mw_principal", "mw_principal", nullptr));
        actionEstoque->setText(QCoreApplication::translate("mw_principal", "Estoque", nullptr));
        actionColaboradores->setText(QCoreApplication::translate("mw_principal", "Colaboradores", nullptr));
        actionVendas->setText(QCoreApplication::translate("mw_principal", "Vendas", nullptr));
        actionSobre->setText(QCoreApplication::translate("mw_principal", "Sobre", nullptr));
        actionSair->setText(QCoreApplication::translate("mw_principal", "Sair", nullptr));
        btn_bloquear->setText(QCoreApplication::translate("mw_principal", "bloq", nullptr));
        pushButton_2->setText(QCoreApplication::translate("mw_principal", "Nova Venda", nullptr));
        lb_nome->setText(QCoreApplication::translate("mw_principal", "Sem Colaborador", nullptr));
        menuGest_o->setTitle(QCoreApplication::translate("mw_principal", "Gest\303\243o", nullptr));
        menuSistema->setTitle(QCoreApplication::translate("mw_principal", "Sistema", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mw_principal: public Ui_mw_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MW_PRINCIPAL_H
