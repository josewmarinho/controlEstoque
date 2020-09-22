#ifndef MW_NOVAVENDA_H
#define MW_NOVAVENDA_H

#include <QDialog>
#include "Conexao.h"
#include <QtSql>
#include <QTableWidget>

namespace Ui {
class mw_novavenda;
}

class mw_novavenda : public QDialog
{
    Q_OBJECT

public:
    explicit mw_novavenda(QWidget *parent = nullptr);
    ~mw_novavenda();
    Conexao con;
    int contlinhas;
    void resetaCampos();
    double calculaTotal(QTableWidget *tw, int coluna);
    double calculaTroco();
    static QString g_idpord,g_prod,g_qtde,g_valuni,g_valtotal;
    static bool alterou;
    void removerLinhas(QTableWidget *tw);

private slots:
    void on_txt_codproduto_returnPressed();

    void on_btn_excluirproduto_clicked();

    void on_btn_editarproduto_clicked();

    void on_btn_finalizarvenda_clicked();

    void on_pushButton_4_clicked();

    void on_btn_pesquisar_clicked();

    void on_txt_valorrecebido_returnPressed();

    void on_tw_listaprodutos_cellDoubleClicked(int row, int column);

private:
    Ui::mw_novavenda *ui;
};

#endif // MW_NOVAVENDA_H
