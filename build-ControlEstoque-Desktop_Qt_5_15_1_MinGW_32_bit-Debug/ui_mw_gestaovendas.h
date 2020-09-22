/********************************************************************************
** Form generated from reading UI file 'mw_gestaovendas.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MW_GESTAOVENDAS_H
#define UI_MW_GESTAOVENDAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_mw_gestaoVendas
{
public:
    QLabel *label;
    QDateEdit *de_dataini;
    QLabel *label_2;
    QDateEdit *de_datafim;
    QPushButton *btn_filtrar;
    QTableWidget *tw_listaVendas;
    QPushButton *btn_relatorioPDF;

    void setupUi(QDialog *mw_gestaoVendas)
    {
        if (mw_gestaoVendas->objectName().isEmpty())
            mw_gestaoVendas->setObjectName(QString::fromUtf8("mw_gestaoVendas"));
        mw_gestaoVendas->resize(868, 537);
        label = new QLabel(mw_gestaoVendas);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(22, 24, 61, 16));
        de_dataini = new QDateEdit(mw_gestaoVendas);
        de_dataini->setObjectName(QString::fromUtf8("de_dataini"));
        de_dataini->setGeometry(QRect(20, 50, 110, 22));
        de_dataini->setDateTime(QDateTime(QDate(2020, 9, 14), QTime(0, 0, 0)));
        label_2 = new QLabel(mw_gestaoVendas);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(147, 23, 61, 16));
        de_datafim = new QDateEdit(mw_gestaoVendas);
        de_datafim->setObjectName(QString::fromUtf8("de_datafim"));
        de_datafim->setGeometry(QRect(144, 51, 110, 22));
        de_datafim->setDateTime(QDateTime(QDate(2020, 12, 31), QTime(0, 0, 0)));
        btn_filtrar = new QPushButton(mw_gestaoVendas);
        btn_filtrar->setObjectName(QString::fromUtf8("btn_filtrar"));
        btn_filtrar->setGeometry(QRect(270, 50, 75, 23));
        tw_listaVendas = new QTableWidget(mw_gestaoVendas);
        tw_listaVendas->setObjectName(QString::fromUtf8("tw_listaVendas"));
        tw_listaVendas->setGeometry(QRect(10, 100, 831, 371));
        btn_relatorioPDF = new QPushButton(mw_gestaoVendas);
        btn_relatorioPDF->setObjectName(QString::fromUtf8("btn_relatorioPDF"));
        btn_relatorioPDF->setGeometry(QRect(10, 490, 151, 23));

        retranslateUi(mw_gestaoVendas);

        QMetaObject::connectSlotsByName(mw_gestaoVendas);
    } // setupUi

    void retranslateUi(QDialog *mw_gestaoVendas)
    {
        mw_gestaoVendas->setWindowTitle(QCoreApplication::translate("mw_gestaoVendas", "Gest\303\243o Venda", nullptr));
        label->setText(QCoreApplication::translate("mw_gestaoVendas", "Data Inicial", nullptr));
        label_2->setText(QCoreApplication::translate("mw_gestaoVendas", "Data Final", nullptr));
        btn_filtrar->setText(QCoreApplication::translate("mw_gestaoVendas", "Filtrar", nullptr));
        btn_relatorioPDF->setText(QCoreApplication::translate("mw_gestaoVendas", "Gerar Relat\303\263rio em PDF", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mw_gestaoVendas: public Ui_mw_gestaoVendas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MW_GESTAOVENDAS_H
