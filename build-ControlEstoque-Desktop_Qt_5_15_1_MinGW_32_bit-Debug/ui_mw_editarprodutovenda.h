/********************************************************************************
** Form generated from reading UI file 'mw_editarprodutovenda.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MW_EDITARPRODUTOVENDA_H
#define UI_MW_EDITARPRODUTOVENDA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mw_editarprodutovenda
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLineEdit *txt_edita_produto;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_edita_precoUnitario;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLineEdit *txt_edita_quantidade;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_edita_confirma;
    QPushButton *btn_edita_cancela;

    void setupUi(QDialog *mw_editarprodutovenda)
    {
        if (mw_editarprodutovenda->objectName().isEmpty())
            mw_editarprodutovenda->setObjectName(QString::fromUtf8("mw_editarprodutovenda"));
        mw_editarprodutovenda->resize(400, 222);
        widget = new QWidget(mw_editarprodutovenda);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 30, 371, 171));
        verticalLayout_4 = new QVBoxLayout(widget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        txt_edita_produto = new QLineEdit(widget);
        txt_edita_produto->setObjectName(QString::fromUtf8("txt_edita_produto"));

        verticalLayout_3->addWidget(txt_edita_produto);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        txt_edita_precoUnitario = new QLineEdit(widget);
        txt_edita_precoUnitario->setObjectName(QString::fromUtf8("txt_edita_precoUnitario"));

        verticalLayout_2->addWidget(txt_edita_precoUnitario);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        txt_edita_quantidade = new QLineEdit(widget);
        txt_edita_quantidade->setObjectName(QString::fromUtf8("txt_edita_quantidade"));

        verticalLayout->addWidget(txt_edita_quantidade);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_4->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_4->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_edita_confirma = new QPushButton(widget);
        btn_edita_confirma->setObjectName(QString::fromUtf8("btn_edita_confirma"));

        horizontalLayout->addWidget(btn_edita_confirma);

        btn_edita_cancela = new QPushButton(widget);
        btn_edita_cancela->setObjectName(QString::fromUtf8("btn_edita_cancela"));

        horizontalLayout->addWidget(btn_edita_cancela);


        verticalLayout_4->addLayout(horizontalLayout);


        retranslateUi(mw_editarprodutovenda);

        QMetaObject::connectSlotsByName(mw_editarprodutovenda);
    } // setupUi

    void retranslateUi(QDialog *mw_editarprodutovenda)
    {
        mw_editarprodutovenda->setWindowTitle(QCoreApplication::translate("mw_editarprodutovenda", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("mw_editarprodutovenda", "Produto", nullptr));
        label_2->setText(QCoreApplication::translate("mw_editarprodutovenda", "Pre\303\247o Unit\303\241rio", nullptr));
        label_3->setText(QCoreApplication::translate("mw_editarprodutovenda", "Quantidade", nullptr));
        btn_edita_confirma->setText(QCoreApplication::translate("mw_editarprodutovenda", "Confirmar", nullptr));
        btn_edita_cancela->setText(QCoreApplication::translate("mw_editarprodutovenda", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mw_editarprodutovenda: public Ui_mw_editarprodutovenda {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MW_EDITARPRODUTOVENDA_H
