/********************************************************************************
** Form generated from reading UI file 'mw_gestaoestoque.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MW_GESTAOESTOQUE_H
#define UI_MW_GESTAOESTOQUE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mw_gestaoEstoque
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_novoproduto;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *codProduto;
    QLabel *label;
    QLineEdit *txt_codigoproduto;
    QVBoxLayout *descricaoProduto;
    QLabel *label_2;
    QLineEdit *txt_descricaoproduto;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *qtdeEstoque;
    QLabel *label_5;
    QLineEdit *txt_qtdeestoque;
    QVBoxLayout *valorCompra;
    QLabel *label_6;
    QLineEdit *txt_valorcompra;
    QVBoxLayout *valorVenda;
    QLabel *label_3;
    QLineEdit *txt_valorvenda;
    QVBoxLayout *Fornecedor;
    QLabel *label_4;
    QLineEdit *txt_fornecedor;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_novoproduto;
    QPushButton *btn_gravarnovoproduto;
    QWidget *tab_gestaoprodutos;
    QTableWidget *tw_ge_produtos;
    QGroupBox *groupBox;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QRadioButton *rb_ge_codigo;
    QRadioButton *rb_ge_produto;
    QLineEdit *txt_ge_filtrar;
    QLabel *label_13;
    QPushButton *btn_ge_filtrar;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_9;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_7;
    QLineEdit *txt_ge_codigoproduto;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_8;
    QLineEdit *txt_ge_produto;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_9;
    QLineEdit *txt_ge_qtde;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_10;
    QLineEdit *txt_ge_valorcompra;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_11;
    QLineEdit *txt_ge_valorvenda;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_12;
    QLineEdit *txt_ge_fornecedor;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *btn_ge_gravar;
    QPushButton *btn_ge_excluir;

    void setupUi(QDialog *mw_gestaoEstoque)
    {
        if (mw_gestaoEstoque->objectName().isEmpty())
            mw_gestaoEstoque->setObjectName(QString::fromUtf8("mw_gestaoEstoque"));
        mw_gestaoEstoque->resize(797, 584);
        tabWidget = new QTabWidget(mw_gestaoEstoque);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(50, 30, 691, 491));
        tab_novoproduto = new QWidget();
        tab_novoproduto->setObjectName(QString::fromUtf8("tab_novoproduto"));
        layoutWidget = new QWidget(tab_novoproduto);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(21, 20, 651, 361));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        codProduto = new QVBoxLayout();
        codProduto->setObjectName(QString::fromUtf8("codProduto"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        codProduto->addWidget(label);

        txt_codigoproduto = new QLineEdit(layoutWidget);
        txt_codigoproduto->setObjectName(QString::fromUtf8("txt_codigoproduto"));

        codProduto->addWidget(txt_codigoproduto);


        verticalLayout_3->addLayout(codProduto);

        descricaoProduto = new QVBoxLayout();
        descricaoProduto->setObjectName(QString::fromUtf8("descricaoProduto"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        descricaoProduto->addWidget(label_2);

        txt_descricaoproduto = new QLineEdit(layoutWidget);
        txt_descricaoproduto->setObjectName(QString::fromUtf8("txt_descricaoproduto"));

        descricaoProduto->addWidget(txt_descricaoproduto);


        verticalLayout_3->addLayout(descricaoProduto);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        qtdeEstoque = new QVBoxLayout();
        qtdeEstoque->setObjectName(QString::fromUtf8("qtdeEstoque"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        qtdeEstoque->addWidget(label_5);

        txt_qtdeestoque = new QLineEdit(layoutWidget);
        txt_qtdeestoque->setObjectName(QString::fromUtf8("txt_qtdeestoque"));

        qtdeEstoque->addWidget(txt_qtdeestoque);


        horizontalLayout_2->addLayout(qtdeEstoque);

        valorCompra = new QVBoxLayout();
        valorCompra->setObjectName(QString::fromUtf8("valorCompra"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        valorCompra->addWidget(label_6);

        txt_valorcompra = new QLineEdit(layoutWidget);
        txt_valorcompra->setObjectName(QString::fromUtf8("txt_valorcompra"));

        valorCompra->addWidget(txt_valorcompra);


        horizontalLayout_2->addLayout(valorCompra);

        valorVenda = new QVBoxLayout();
        valorVenda->setObjectName(QString::fromUtf8("valorVenda"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        valorVenda->addWidget(label_3);

        txt_valorvenda = new QLineEdit(layoutWidget);
        txt_valorvenda->setObjectName(QString::fromUtf8("txt_valorvenda"));

        valorVenda->addWidget(txt_valorvenda);


        horizontalLayout_2->addLayout(valorVenda);

        Fornecedor = new QVBoxLayout();
        Fornecedor->setObjectName(QString::fromUtf8("Fornecedor"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        Fornecedor->addWidget(label_4);

        txt_fornecedor = new QLineEdit(layoutWidget);
        txt_fornecedor->setObjectName(QString::fromUtf8("txt_fornecedor"));

        Fornecedor->addWidget(txt_fornecedor);


        horizontalLayout_2->addLayout(Fornecedor);


        verticalLayout_3->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_novoproduto = new QPushButton(layoutWidget);
        btn_novoproduto->setObjectName(QString::fromUtf8("btn_novoproduto"));

        horizontalLayout->addWidget(btn_novoproduto);

        btn_gravarnovoproduto = new QPushButton(layoutWidget);
        btn_gravarnovoproduto->setObjectName(QString::fromUtf8("btn_gravarnovoproduto"));

        horizontalLayout->addWidget(btn_gravarnovoproduto);


        verticalLayout_3->addLayout(horizontalLayout);

        tabWidget->addTab(tab_novoproduto, QString());
        tab_gestaoprodutos = new QWidget();
        tab_gestaoprodutos->setObjectName(QString::fromUtf8("tab_gestaoprodutos"));
        tw_ge_produtos = new QTableWidget(tab_gestaoprodutos);
        tw_ge_produtos->setObjectName(QString::fromUtf8("tw_ge_produtos"));
        tw_ge_produtos->setGeometry(QRect(370, 121, 301, 291));
        groupBox = new QGroupBox(tab_gestaoprodutos);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(371, 24, 151, 91));
        layoutWidget1 = new QWidget(groupBox);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 30, 112, 42));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        rb_ge_codigo = new QRadioButton(layoutWidget1);
        rb_ge_codigo->setObjectName(QString::fromUtf8("rb_ge_codigo"));
        rb_ge_codigo->setChecked(true);

        verticalLayout->addWidget(rb_ge_codigo);

        rb_ge_produto = new QRadioButton(layoutWidget1);
        rb_ge_produto->setObjectName(QString::fromUtf8("rb_ge_produto"));

        verticalLayout->addWidget(rb_ge_produto);

        txt_ge_filtrar = new QLineEdit(tab_gestaoprodutos);
        txt_ge_filtrar->setObjectName(QString::fromUtf8("txt_ge_filtrar"));
        txt_ge_filtrar->setGeometry(QRect(530, 73, 141, 20));
        label_13 = new QLabel(tab_gestaoprodutos);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(534, 46, 51, 21));
        btn_ge_filtrar = new QPushButton(tab_gestaoprodutos);
        btn_ge_filtrar->setObjectName(QString::fromUtf8("btn_ge_filtrar"));
        btn_ge_filtrar->setGeometry(QRect(595, 40, 75, 23));
        layoutWidget2 = new QWidget(tab_gestaoprodutos);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 30, 331, 381));
        verticalLayout_9 = new QVBoxLayout(layoutWidget2);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_7 = new QLabel(layoutWidget2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_2->addWidget(label_7);

        txt_ge_codigoproduto = new QLineEdit(layoutWidget2);
        txt_ge_codigoproduto->setObjectName(QString::fromUtf8("txt_ge_codigoproduto"));

        verticalLayout_2->addWidget(txt_ge_codigoproduto);


        verticalLayout_9->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_8 = new QLabel(layoutWidget2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_4->addWidget(label_8);

        txt_ge_produto = new QLineEdit(layoutWidget2);
        txt_ge_produto->setObjectName(QString::fromUtf8("txt_ge_produto"));

        verticalLayout_4->addWidget(txt_ge_produto);


        verticalLayout_9->addLayout(verticalLayout_4);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_9 = new QLabel(layoutWidget2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_5->addWidget(label_9);

        txt_ge_qtde = new QLineEdit(layoutWidget2);
        txt_ge_qtde->setObjectName(QString::fromUtf8("txt_ge_qtde"));

        verticalLayout_5->addWidget(txt_ge_qtde);


        verticalLayout_9->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_10 = new QLabel(layoutWidget2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_6->addWidget(label_10);

        txt_ge_valorcompra = new QLineEdit(layoutWidget2);
        txt_ge_valorcompra->setObjectName(QString::fromUtf8("txt_ge_valorcompra"));

        verticalLayout_6->addWidget(txt_ge_valorcompra);


        verticalLayout_9->addLayout(verticalLayout_6);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_11 = new QLabel(layoutWidget2);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout_7->addWidget(label_11);

        txt_ge_valorvenda = new QLineEdit(layoutWidget2);
        txt_ge_valorvenda->setObjectName(QString::fromUtf8("txt_ge_valorvenda"));

        verticalLayout_7->addWidget(txt_ge_valorvenda);


        verticalLayout_9->addLayout(verticalLayout_7);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_12 = new QLabel(layoutWidget2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_8->addWidget(label_12);

        txt_ge_fornecedor = new QLineEdit(layoutWidget2);
        txt_ge_fornecedor->setObjectName(QString::fromUtf8("txt_ge_fornecedor"));

        verticalLayout_8->addWidget(txt_ge_fornecedor);


        verticalLayout_9->addLayout(verticalLayout_8);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        btn_ge_gravar = new QPushButton(layoutWidget2);
        btn_ge_gravar->setObjectName(QString::fromUtf8("btn_ge_gravar"));

        horizontalLayout_3->addWidget(btn_ge_gravar);

        btn_ge_excluir = new QPushButton(layoutWidget2);
        btn_ge_excluir->setObjectName(QString::fromUtf8("btn_ge_excluir"));

        horizontalLayout_3->addWidget(btn_ge_excluir);


        verticalLayout_9->addLayout(horizontalLayout_3);

        tabWidget->addTab(tab_gestaoprodutos, QString());

        retranslateUi(mw_gestaoEstoque);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(mw_gestaoEstoque);
    } // setupUi

    void retranslateUi(QDialog *mw_gestaoEstoque)
    {
        mw_gestaoEstoque->setWindowTitle(QCoreApplication::translate("mw_gestaoEstoque", "Novo Produto", nullptr));
        label->setText(QCoreApplication::translate("mw_gestaoEstoque", "C\303\263digo do Produto", nullptr));
        label_2->setText(QCoreApplication::translate("mw_gestaoEstoque", "Descri\303\247\303\243o Produto", nullptr));
        label_5->setText(QCoreApplication::translate("mw_gestaoEstoque", "Qtde Estoque", nullptr));
        label_6->setText(QCoreApplication::translate("mw_gestaoEstoque", "Valor de Compra", nullptr));
        label_3->setText(QCoreApplication::translate("mw_gestaoEstoque", "Valor de Venda", nullptr));
        label_4->setText(QCoreApplication::translate("mw_gestaoEstoque", "Fornecedor", nullptr));
        btn_novoproduto->setText(QCoreApplication::translate("mw_gestaoEstoque", "Novo", nullptr));
        btn_gravarnovoproduto->setText(QCoreApplication::translate("mw_gestaoEstoque", "Gravar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_novoproduto), QCoreApplication::translate("mw_gestaoEstoque", "Novo Produto", nullptr));
        groupBox->setTitle(QCoreApplication::translate("mw_gestaoEstoque", "Filtrar por:", nullptr));
        rb_ge_codigo->setText(QCoreApplication::translate("mw_gestaoEstoque", "C\303\263digo Produto", nullptr));
        rb_ge_produto->setText(QCoreApplication::translate("mw_gestaoEstoque", "Descri\303\247\303\243o Produto", nullptr));
        label_13->setText(QCoreApplication::translate("mw_gestaoEstoque", "Filtrar", nullptr));
        btn_ge_filtrar->setText(QCoreApplication::translate("mw_gestaoEstoque", "Filtrar", nullptr));
        label_7->setText(QCoreApplication::translate("mw_gestaoEstoque", "C\303\263digo do Produto", nullptr));
        label_8->setText(QCoreApplication::translate("mw_gestaoEstoque", "Produto", nullptr));
        label_9->setText(QCoreApplication::translate("mw_gestaoEstoque", "Quantidade", nullptr));
        label_10->setText(QCoreApplication::translate("mw_gestaoEstoque", "Valor Compra", nullptr));
        label_11->setText(QCoreApplication::translate("mw_gestaoEstoque", "Valor Venda", nullptr));
        label_12->setText(QCoreApplication::translate("mw_gestaoEstoque", "Fornecedor", nullptr));
        btn_ge_gravar->setText(QCoreApplication::translate("mw_gestaoEstoque", "Gravar", nullptr));
        btn_ge_excluir->setText(QCoreApplication::translate("mw_gestaoEstoque", "Excluir", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_gestaoprodutos), QCoreApplication::translate("mw_gestaoEstoque", "Gest\303\243o Produtos", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mw_gestaoEstoque: public Ui_mw_gestaoEstoque {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MW_GESTAOESTOQUE_H
