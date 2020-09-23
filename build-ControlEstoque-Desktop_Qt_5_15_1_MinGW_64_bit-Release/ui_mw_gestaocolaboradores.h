/********************************************************************************
** Form generated from reading UI file 'mw_gestaocolaboradores.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MW_GESTAOCOLABORADORES_H
#define UI_MW_GESTAOCOLABORADORES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
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

class Ui_mw_gestaoColaboradores
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_novocolaborador;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label;
    QLineEdit *txt_nome_novocolab;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *txt_username_novocolab;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_3;
    QLineEdit *txt_senha_novocolab;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_4;
    QLineEdit *txt_fone_novocolab;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_5;
    QComboBox *cb_acesso_novocolab;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *btn_novo_novocolab;
    QPushButton *btn_gravar_novocolab;
    QWidget *tab_2;
    QGroupBox *groupBox;
    QRadioButton *rb_ge_idcolab;
    QRadioButton *rb_ge_nome;
    QTableWidget *tw_ge_listacolab;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_15;
    QVBoxLayout *verticalLayout_13;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_6;
    QLineEdit *txt_ge_nome;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_7;
    QLineEdit *txt_ge_username;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_8;
    QLineEdit *txt_ge_senha;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_9;
    QLineEdit *txt_ge_telefone;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_10;
    QComboBox *cb_ge_acesso;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *btn_ge_gravar;
    QPushButton *btn_ge_excluir;
    QPushButton *btn_ge_vervendas;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_16;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_12;
    QLineEdit *txt_ge_filtro;
    QPushButton *btn_ge_filtrar;

    void setupUi(QDialog *mw_gestaoColaboradores)
    {
        if (mw_gestaoColaboradores->objectName().isEmpty())
            mw_gestaoColaboradores->setObjectName(QString::fromUtf8("mw_gestaoColaboradores"));
        mw_gestaoColaboradores->resize(644, 494);
        tabWidget = new QTabWidget(mw_gestaoColaboradores);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 621, 441));
        tab_novocolaborador = new QWidget();
        tab_novocolaborador->setObjectName(QString::fromUtf8("tab_novocolaborador"));
        layoutWidget = new QWidget(tab_novocolaborador);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 20, 551, 311));
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_3->addWidget(label);

        txt_nome_novocolab = new QLineEdit(layoutWidget);
        txt_nome_novocolab->setObjectName(QString::fromUtf8("txt_nome_novocolab"));

        verticalLayout_3->addWidget(txt_nome_novocolab);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        txt_username_novocolab = new QLineEdit(layoutWidget);
        txt_username_novocolab->setObjectName(QString::fromUtf8("txt_username_novocolab"));

        verticalLayout_2->addWidget(txt_username_novocolab);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_4->addWidget(label_3);

        txt_senha_novocolab = new QLineEdit(layoutWidget);
        txt_senha_novocolab->setObjectName(QString::fromUtf8("txt_senha_novocolab"));
        txt_senha_novocolab->setEchoMode(QLineEdit::Password);

        verticalLayout_4->addWidget(txt_senha_novocolab);


        verticalLayout->addLayout(verticalLayout_4);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_6->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_6->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_7->addWidget(label_4);

        txt_fone_novocolab = new QLineEdit(layoutWidget);
        txt_fone_novocolab->setObjectName(QString::fromUtf8("txt_fone_novocolab"));

        verticalLayout_7->addWidget(txt_fone_novocolab);


        horizontalLayout_3->addLayout(verticalLayout_7);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_5->addWidget(label_5);

        cb_acesso_novocolab = new QComboBox(layoutWidget);
        cb_acesso_novocolab->setObjectName(QString::fromUtf8("cb_acesso_novocolab"));

        verticalLayout_5->addWidget(cb_acesso_novocolab);


        horizontalLayout_3->addLayout(verticalLayout_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_6->addLayout(horizontalLayout_3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btn_novo_novocolab = new QPushButton(layoutWidget);
        btn_novo_novocolab->setObjectName(QString::fromUtf8("btn_novo_novocolab"));

        horizontalLayout->addWidget(btn_novo_novocolab);

        btn_gravar_novocolab = new QPushButton(layoutWidget);
        btn_gravar_novocolab->setObjectName(QString::fromUtf8("btn_gravar_novocolab"));

        horizontalLayout->addWidget(btn_gravar_novocolab);


        verticalLayout_6->addLayout(horizontalLayout);

        tabWidget->addTab(tab_novocolaborador, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        groupBox = new QGroupBox(tab_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(260, 30, 141, 80));
        rb_ge_idcolab = new QRadioButton(groupBox);
        rb_ge_idcolab->setObjectName(QString::fromUtf8("rb_ge_idcolab"));
        rb_ge_idcolab->setGeometry(QRect(10, 20, 82, 17));
        rb_ge_idcolab->setChecked(true);
        rb_ge_nome = new QRadioButton(groupBox);
        rb_ge_nome->setObjectName(QString::fromUtf8("rb_ge_nome"));
        rb_ge_nome->setGeometry(QRect(10, 50, 82, 17));
        tw_ge_listacolab = new QTableWidget(tab_2);
        tw_ge_listacolab->setObjectName(QString::fromUtf8("tw_ge_listacolab"));
        tw_ge_listacolab->setGeometry(QRect(265, 125, 321, 271));
        layoutWidget1 = new QWidget(tab_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 30, 241, 371));
        verticalLayout_15 = new QVBoxLayout(layoutWidget1);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_6 = new QLabel(layoutWidget1);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_8->addWidget(label_6);

        txt_ge_nome = new QLineEdit(layoutWidget1);
        txt_ge_nome->setObjectName(QString::fromUtf8("txt_ge_nome"));

        verticalLayout_8->addWidget(txt_ge_nome);


        verticalLayout_13->addLayout(verticalLayout_8);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_7 = new QLabel(layoutWidget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        verticalLayout_9->addWidget(label_7);

        txt_ge_username = new QLineEdit(layoutWidget1);
        txt_ge_username->setObjectName(QString::fromUtf8("txt_ge_username"));

        verticalLayout_9->addWidget(txt_ge_username);


        verticalLayout_13->addLayout(verticalLayout_9);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_8 = new QLabel(layoutWidget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        verticalLayout_10->addWidget(label_8);

        txt_ge_senha = new QLineEdit(layoutWidget1);
        txt_ge_senha->setObjectName(QString::fromUtf8("txt_ge_senha"));
        txt_ge_senha->setEchoMode(QLineEdit::Password);

        verticalLayout_10->addWidget(txt_ge_senha);


        verticalLayout_13->addLayout(verticalLayout_10);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_9 = new QLabel(layoutWidget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout_11->addWidget(label_9);

        txt_ge_telefone = new QLineEdit(layoutWidget1);
        txt_ge_telefone->setObjectName(QString::fromUtf8("txt_ge_telefone"));

        verticalLayout_11->addWidget(txt_ge_telefone);


        verticalLayout_13->addLayout(verticalLayout_11);

        verticalLayout_12 = new QVBoxLayout();
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        label_10 = new QLabel(layoutWidget1);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_12->addWidget(label_10);


        verticalLayout_13->addLayout(verticalLayout_12);


        verticalLayout_15->addLayout(verticalLayout_13);

        cb_ge_acesso = new QComboBox(layoutWidget1);
        cb_ge_acesso->setObjectName(QString::fromUtf8("cb_ge_acesso"));

        verticalLayout_15->addWidget(cb_ge_acesso);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_15->addItem(verticalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        btn_ge_gravar = new QPushButton(layoutWidget1);
        btn_ge_gravar->setObjectName(QString::fromUtf8("btn_ge_gravar"));

        horizontalLayout_4->addWidget(btn_ge_gravar);

        btn_ge_excluir = new QPushButton(layoutWidget1);
        btn_ge_excluir->setObjectName(QString::fromUtf8("btn_ge_excluir"));

        horizontalLayout_4->addWidget(btn_ge_excluir);

        btn_ge_vervendas = new QPushButton(layoutWidget1);
        btn_ge_vervendas->setObjectName(QString::fromUtf8("btn_ge_vervendas"));

        horizontalLayout_4->addWidget(btn_ge_vervendas);


        verticalLayout_15->addLayout(horizontalLayout_4);

        layoutWidget2 = new QWidget(tab_2);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(420, 40, 161, 72));
        verticalLayout_16 = new QVBoxLayout(layoutWidget2);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        label_12 = new QLabel(layoutWidget2);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout_14->addWidget(label_12);

        txt_ge_filtro = new QLineEdit(layoutWidget2);
        txt_ge_filtro->setObjectName(QString::fromUtf8("txt_ge_filtro"));

        verticalLayout_14->addWidget(txt_ge_filtro);


        verticalLayout_16->addLayout(verticalLayout_14);

        btn_ge_filtrar = new QPushButton(layoutWidget2);
        btn_ge_filtrar->setObjectName(QString::fromUtf8("btn_ge_filtrar"));

        verticalLayout_16->addWidget(btn_ge_filtrar);

        tabWidget->addTab(tab_2, QString());

        retranslateUi(mw_gestaoColaboradores);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(mw_gestaoColaboradores);
    } // setupUi

    void retranslateUi(QDialog *mw_gestaoColaboradores)
    {
        mw_gestaoColaboradores->setWindowTitle(QCoreApplication::translate("mw_gestaoColaboradores", "Gest\303\243o Colaboradores", nullptr));
        label->setText(QCoreApplication::translate("mw_gestaoColaboradores", "Nome", nullptr));
        label_2->setText(QCoreApplication::translate("mw_gestaoColaboradores", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("mw_gestaoColaboradores", "Senha", nullptr));
        label_4->setText(QCoreApplication::translate("mw_gestaoColaboradores", "Telefone", nullptr));
        label_5->setText(QCoreApplication::translate("mw_gestaoColaboradores", "Tipo Acesso", nullptr));
        btn_novo_novocolab->setText(QCoreApplication::translate("mw_gestaoColaboradores", "Novo", nullptr));
        btn_gravar_novocolab->setText(QCoreApplication::translate("mw_gestaoColaboradores", "Salvar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_novocolaborador), QCoreApplication::translate("mw_gestaoColaboradores", "Novo Colaborador", nullptr));
        groupBox->setTitle(QCoreApplication::translate("mw_gestaoColaboradores", "Filtra por:", nullptr));
        rb_ge_idcolab->setText(QCoreApplication::translate("mw_gestaoColaboradores", "ID Colab", nullptr));
        rb_ge_nome->setText(QCoreApplication::translate("mw_gestaoColaboradores", "Nome", nullptr));
        label_6->setText(QCoreApplication::translate("mw_gestaoColaboradores", "Nome", nullptr));
        label_7->setText(QCoreApplication::translate("mw_gestaoColaboradores", "Username", nullptr));
        label_8->setText(QCoreApplication::translate("mw_gestaoColaboradores", "Senha", nullptr));
        label_9->setText(QCoreApplication::translate("mw_gestaoColaboradores", "Telefone", nullptr));
        label_10->setText(QCoreApplication::translate("mw_gestaoColaboradores", "Acesso", nullptr));
        btn_ge_gravar->setText(QCoreApplication::translate("mw_gestaoColaboradores", "Salvar", nullptr));
        btn_ge_excluir->setText(QCoreApplication::translate("mw_gestaoColaboradores", "Excluir", nullptr));
        btn_ge_vervendas->setText(QCoreApplication::translate("mw_gestaoColaboradores", "Ver Vendas", nullptr));
        label_12->setText(QCoreApplication::translate("mw_gestaoColaboradores", "Filtro", nullptr));
        btn_ge_filtrar->setText(QCoreApplication::translate("mw_gestaoColaboradores", "Filtrar", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("mw_gestaoColaboradores", "Gest\303\243o Colaborador", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mw_gestaoColaboradores: public Ui_mw_gestaoColaboradores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MW_GESTAOCOLABORADORES_H
