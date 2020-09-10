/********************************************************************************
** Form generated from reading UI file 'mw_logar.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MW_LOGAR_H
#define UI_MW_LOGAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mw_logar
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *txt_username;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_senha;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_logar;
    QPushButton *btn_cancelar;

    void setupUi(QDialog *mw_logar)
    {
        if (mw_logar->objectName().isEmpty())
            mw_logar->setObjectName(QString::fromUtf8("mw_logar"));
        mw_logar->resize(398, 300);
        widget = new QWidget(mw_logar);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 50, 351, 111));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        txt_username = new QLineEdit(widget);
        txt_username->setObjectName(QString::fromUtf8("txt_username"));

        horizontalLayout->addWidget(txt_username);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        txt_senha = new QLineEdit(widget);
        txt_senha->setObjectName(QString::fromUtf8("txt_senha"));
        txt_senha->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(txt_senha);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btn_logar = new QPushButton(widget);
        btn_logar->setObjectName(QString::fromUtf8("btn_logar"));

        horizontalLayout_3->addWidget(btn_logar);

        btn_cancelar = new QPushButton(widget);
        btn_cancelar->setObjectName(QString::fromUtf8("btn_cancelar"));

        horizontalLayout_3->addWidget(btn_cancelar);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(mw_logar);

        QMetaObject::connectSlotsByName(mw_logar);
    } // setupUi

    void retranslateUi(QDialog *mw_logar)
    {
        mw_logar->setWindowTitle(QCoreApplication::translate("mw_logar", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("mw_logar", "Username", nullptr));
        label_2->setText(QCoreApplication::translate("mw_logar", "Senha", nullptr));
        btn_logar->setText(QCoreApplication::translate("mw_logar", "ENTRAR", nullptr));
        btn_cancelar->setText(QCoreApplication::translate("mw_logar", "SAIR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mw_logar: public Ui_mw_logar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MW_LOGAR_H
