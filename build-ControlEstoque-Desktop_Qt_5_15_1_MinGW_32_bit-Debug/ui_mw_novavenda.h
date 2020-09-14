/********************************************************************************
** Form generated from reading UI file 'mw_novavenda.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MW_NOVAVENDA_H
#define UI_MW_NOVAVENDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_mw_novavenda
{
public:
    QLineEdit *txt_qtde;
    QLineEdit *txt_codproduto;
    QTableWidget *tw_listaprodutos;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *lb_totalvenda;
    QPushButton *btn_excluirproduto;
    QPushButton *btn_editarproduto;
    QPushButton *btn_finalizarvenda;
    QPushButton *pushButton_4;

    void setupUi(QDialog *mw_novavenda)
    {
        if (mw_novavenda->objectName().isEmpty())
            mw_novavenda->setObjectName(QString::fromUtf8("mw_novavenda"));
        mw_novavenda->resize(664, 383);
        txt_qtde = new QLineEdit(mw_novavenda);
        txt_qtde->setObjectName(QString::fromUtf8("txt_qtde"));
        txt_qtde->setGeometry(QRect(30, 20, 61, 20));
        txt_codproduto = new QLineEdit(mw_novavenda);
        txt_codproduto->setObjectName(QString::fromUtf8("txt_codproduto"));
        txt_codproduto->setGeometry(QRect(110, 20, 221, 20));
        tw_listaprodutos = new QTableWidget(mw_novavenda);
        tw_listaprodutos->setObjectName(QString::fromUtf8("tw_listaprodutos"));
        tw_listaprodutos->setGeometry(QRect(30, 50, 600, 251));
        label = new QLabel(mw_novavenda);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 0, 61, 16));
        label_2 = new QLabel(mw_novavenda);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(110, 0, 101, 16));
        label_3 = new QLabel(mw_novavenda);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 20, 16, 16));
        label_4 = new QLabel(mw_novavenda);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(31, 308, 61, 16));
        lb_totalvenda = new QLabel(mw_novavenda);
        lb_totalvenda->setObjectName(QString::fromUtf8("lb_totalvenda"));
        lb_totalvenda->setGeometry(QRect(89, 308, 61, 16));
        btn_excluirproduto = new QPushButton(mw_novavenda);
        btn_excluirproduto->setObjectName(QString::fromUtf8("btn_excluirproduto"));
        btn_excluirproduto->setGeometry(QRect(30, 340, 100, 23));
        btn_excluirproduto->setAutoDefault(false);
        btn_editarproduto = new QPushButton(mw_novavenda);
        btn_editarproduto->setObjectName(QString::fromUtf8("btn_editarproduto"));
        btn_editarproduto->setGeometry(QRect(141, 340, 100, 23));
        btn_editarproduto->setAutoDefault(false);
        btn_finalizarvenda = new QPushButton(mw_novavenda);
        btn_finalizarvenda->setObjectName(QString::fromUtf8("btn_finalizarvenda"));
        btn_finalizarvenda->setGeometry(QRect(253, 339, 100, 23));
        btn_finalizarvenda->setAutoDefault(false);
        pushButton_4 = new QPushButton(mw_novavenda);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(340, 17, 100, 23));
        pushButton_4->setAutoDefault(false);

        retranslateUi(mw_novavenda);

        QMetaObject::connectSlotsByName(mw_novavenda);
    } // setupUi

    void retranslateUi(QDialog *mw_novavenda)
    {
        mw_novavenda->setWindowTitle(QCoreApplication::translate("mw_novavenda", "Dialog", nullptr));
        txt_qtde->setText(QCoreApplication::translate("mw_novavenda", "1", nullptr));
        label->setText(QCoreApplication::translate("mw_novavenda", "Quantidade", nullptr));
        label_2->setText(QCoreApplication::translate("mw_novavenda", "C\303\263digo do Produto", nullptr));
        label_3->setText(QCoreApplication::translate("mw_novavenda", "X", nullptr));
        label_4->setText(QCoreApplication::translate("mw_novavenda", "Valor Total:", nullptr));
        lb_totalvenda->setText(QCoreApplication::translate("mw_novavenda", "R$", nullptr));
        btn_excluirproduto->setText(QCoreApplication::translate("mw_novavenda", "Excluir Produto", nullptr));
        btn_editarproduto->setText(QCoreApplication::translate("mw_novavenda", "Editar Produto", nullptr));
        btn_finalizarvenda->setText(QCoreApplication::translate("mw_novavenda", "Finalizar Venda", nullptr));
        pushButton_4->setText(QCoreApplication::translate("mw_novavenda", "Pesquisar Produto", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mw_novavenda: public Ui_mw_novavenda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MW_NOVAVENDA_H
