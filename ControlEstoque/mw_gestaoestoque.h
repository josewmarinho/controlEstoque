#ifndef MW_GESTAOESTOQUE_H
#define MW_GESTAOESTOQUE_H

#include <QDialog>
#include <Conexao.h>
#include <QMessageBox>
#include <QTableWidget>

namespace Ui {
class mw_gestaoEstoque;
}

class mw_gestaoEstoque : public QDialog
{
    Q_OBJECT

public:
    explicit mw_gestaoEstoque(QWidget *parent = nullptr);
    ~mw_gestaoEstoque();
    Conexao con;
    void removerLinhas(QTableWidget *tw);

private slots:
    void on_btn_novoproduto_clicked();

    void on_btn_gravarnovoproduto_clicked();

    void on_tabWidget_currentChanged(int index);

    void on_tw_ge_produtos_itemSelectionChanged();

    void on_btn_ge_gravar_clicked();

    void on_btn_ge_excluir_clicked();

    void on_btn_ge_filtrar_clicked();

private:
    Ui::mw_gestaoEstoque *ui;
};

#endif // MW_GESTAOESTOQUE_H
