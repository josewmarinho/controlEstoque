#ifndef MW_GESTAOCOLABORADORES_H
#define MW_GESTAOCOLABORADORES_H

#include <QDialog>
#include "Conexao.h"
#include <QTableWidget>

namespace Ui {
class mw_gestaoColaboradores;
}

class mw_gestaoColaboradores : public QDialog
{
    Q_OBJECT

public:
    explicit mw_gestaoColaboradores(QWidget *parent = nullptr);
    ~mw_gestaoColaboradores();
    Conexao con;

private slots:
    void on_btn_novo_novocolab_clicked();

    void on_btn_gravar_novocolab_clicked();

    void on_btn_cancelar_novocolab_clicked();

    void on_tabWidget_currentChanged(int index);

    void on_tw_ge_listacolab_itemSelectionChanged();

    void on_btn_ge_filtrar_clicked();

    void on_btn_ge_gravar_clicked();

    void on_btn_ge_excluir_clicked();

private:
    Ui::mw_gestaoColaboradores *ui;
};

#endif // MW_GESTAOCOLABORADORES_H
