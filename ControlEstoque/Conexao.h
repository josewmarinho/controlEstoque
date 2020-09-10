#ifndef CONEXAO_H
#define CONEXAO_H
#include <QtSql>

class Conexao {
public:
    QSqlDatabase bancoDedados;
    Conexao(){
        bancoDedados=QSqlDatabase::addDatabase("QSQLITE");
    }
    void fechar(){
        bancoDedados.close();
    }
    bool abrir(){
        QString local=qApp->applicationDirPath();
        QString banco=local+"/db/controlEstoque.db";
        bancoDedados.setDatabaseName(banco);

        if(!bancoDedados.open()){
           return false;
        }else{
            return true;
        }
    }
};

#endif // CONEXAO_H
