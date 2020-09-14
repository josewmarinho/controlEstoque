#include "funcoes_globais.h"

funcoes_globais::funcoes_globais()
{

}

void funcoes_globais::removerLinhas(QTableWidget *tw){
    while(tw->rowCount()>0){
        tw->removeRow(0);
    }
}
