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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
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
    QLineEdit *txt_nomebusca;
    QPushButton *btn_pesquisar;
    QTableWidget *tw_listapesquisar;
    QGroupBox *groupBox;
    QRadioButton *rb_nomebusca;
    QRadioButton *rb_idbusca;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *txt_valorrecebido;
    QLabel *lb_troco;

    void setupUi(QDialog *mw_novavenda)
    {
        if (mw_novavenda->objectName().isEmpty())
            mw_novavenda->setObjectName(QString::fromUtf8("mw_novavenda"));
        mw_novavenda->resize(900, 400);
        txt_qtde = new QLineEdit(mw_novavenda);
        txt_qtde->setObjectName(QString::fromUtf8("txt_qtde"));
        txt_qtde->setGeometry(QRect(30, 20, 61, 20));
        txt_codproduto = new QLineEdit(mw_novavenda);
        txt_codproduto->setObjectName(QString::fromUtf8("txt_codproduto"));
        txt_codproduto->setGeometry(QRect(110, 20, 221, 20));
        tw_listaprodutos = new QTableWidget(mw_novavenda);
        tw_listaprodutos->setObjectName(QString::fromUtf8("tw_listaprodutos"));
        tw_listaprodutos->setGeometry(QRect(30, 50, 491, 251));
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
        label_4->setGeometry(QRect(31, 319, 81, 21));
        QFont font;
        font.setPointSize(12);
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8(""));
        lb_totalvenda = new QLabel(mw_novavenda);
        lb_totalvenda->setObjectName(QString::fromUtf8("lb_totalvenda"));
        lb_totalvenda->setGeometry(QRect(120, 320, 101, 16));
        lb_totalvenda->setFont(font);
        lb_totalvenda->setStyleSheet(QString::fromUtf8("color:#FA023C;"));
        btn_excluirproduto = new QPushButton(mw_novavenda);
        btn_excluirproduto->setObjectName(QString::fromUtf8("btn_excluirproduto"));
        btn_excluirproduto->setGeometry(QRect(30, 360, 100, 23));
        btn_excluirproduto->setAutoDefault(false);
        btn_editarproduto = new QPushButton(mw_novavenda);
        btn_editarproduto->setObjectName(QString::fromUtf8("btn_editarproduto"));
        btn_editarproduto->setGeometry(QRect(141, 359, 100, 23));
        btn_editarproduto->setAutoDefault(false);
        btn_finalizarvenda = new QPushButton(mw_novavenda);
        btn_finalizarvenda->setObjectName(QString::fromUtf8("btn_finalizarvenda"));
        btn_finalizarvenda->setGeometry(QRect(253, 359, 100, 23));
        btn_finalizarvenda->setAutoDefault(false);
        pushButton_4 = new QPushButton(mw_novavenda);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(340, 17, 61, 23));
        pushButton_4->setAutoDefault(false);
        txt_nomebusca = new QLineEdit(mw_novavenda);
        txt_nomebusca->setObjectName(QString::fromUtf8("txt_nomebusca"));
        txt_nomebusca->setGeometry(QRect(674, 50, 181, 20));
        btn_pesquisar = new QPushButton(mw_novavenda);
        btn_pesquisar->setObjectName(QString::fromUtf8("btn_pesquisar"));
        btn_pesquisar->setGeometry(QRect(674, 20, 181, 23));
        btn_pesquisar->setAutoDefault(false);
        tw_listapesquisar = new QTableWidget(mw_novavenda);
        tw_listapesquisar->setObjectName(QString::fromUtf8("tw_listapesquisar"));
        tw_listapesquisar->setGeometry(QRect(549, 79, 309, 221));
        groupBox = new QGroupBox(mw_novavenda);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(550, 1, 101, 71));
        rb_nomebusca = new QRadioButton(groupBox);
        rb_nomebusca->setObjectName(QString::fromUtf8("rb_nomebusca"));
        rb_nomebusca->setGeometry(QRect(10, 20, 51, 17));
        rb_nomebusca->setChecked(true);
        rb_idbusca = new QRadioButton(groupBox);
        rb_idbusca->setObjectName(QString::fromUtf8("rb_idbusca"));
        rb_idbusca->setGeometry(QRect(10, 50, 82, 17));
        label_5 = new QLabel(mw_novavenda);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(354, 308, 81, 20));
        label_6 = new QLabel(mw_novavenda);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(357, 338, 47, 13));
        QFont font1;
        font1.setPointSize(10);
        label_6->setFont(font1);
        txt_valorrecebido = new QLineEdit(mw_novavenda);
        txt_valorrecebido->setObjectName(QString::fromUtf8("txt_valorrecebido"));
        txt_valorrecebido->setGeometry(QRect(438, 307, 81, 20));
        lb_troco = new QLabel(mw_novavenda);
        lb_troco->setObjectName(QString::fromUtf8("lb_troco"));
        lb_troco->setGeometry(QRect(398, 337, 61, 16));
        lb_troco->setFont(font1);
        lb_troco->setStyleSheet(QString::fromUtf8("color:#248;"));

        retranslateUi(mw_novavenda);

        QMetaObject::connectSlotsByName(mw_novavenda);
    } // setupUi

    void retranslateUi(QDialog *mw_novavenda)
    {
        mw_novavenda->setWindowTitle(QCoreApplication::translate("mw_novavenda", "Nova Venda", nullptr));
        txt_qtde->setText(QCoreApplication::translate("mw_novavenda", "1", nullptr));
        label->setText(QCoreApplication::translate("mw_novavenda", "Quantidade", nullptr));
        label_2->setText(QCoreApplication::translate("mw_novavenda", "C\303\263digo do Produto", nullptr));
        label_3->setText(QCoreApplication::translate("mw_novavenda", "X", nullptr));
        label_4->setText(QCoreApplication::translate("mw_novavenda", "Valor Total:", nullptr));
        lb_totalvenda->setText(QCoreApplication::translate("mw_novavenda", "R$", nullptr));
        btn_excluirproduto->setText(QCoreApplication::translate("mw_novavenda", "Excluir Produto", nullptr));
        btn_editarproduto->setText(QCoreApplication::translate("mw_novavenda", "Editar Produto", nullptr));
        btn_finalizarvenda->setText(QCoreApplication::translate("mw_novavenda", "Finalizar Venda", nullptr));
        pushButton_4->setText(QCoreApplication::translate("mw_novavenda", "OK", nullptr));
        btn_pesquisar->setText(QCoreApplication::translate("mw_novavenda", "Pesquisar", nullptr));
        groupBox->setTitle(QCoreApplication::translate("mw_novavenda", "Pesquisar por:", nullptr));
        rb_nomebusca->setText(QCoreApplication::translate("mw_novavenda", "Nome", nullptr));
        rb_idbusca->setText(QCoreApplication::translate("mw_novavenda", "Id:", nullptr));
        label_5->setText(QCoreApplication::translate("mw_novavenda", "Valor Recebido:", nullptr));
        label_6->setText(QCoreApplication::translate("mw_novavenda", "Troco:", nullptr));
        lb_troco->setText(QCoreApplication::translate("mw_novavenda", "R$", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mw_novavenda: public Ui_mw_novavenda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MW_NOVAVENDA_H
