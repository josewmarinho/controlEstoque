#ifndef CONEXAO_H
#define CONEXAO_H
#include <QtSql>

class Conexao {
public:
    QSqlDatabase bancoDedados;
    QString local;
    QString banco;
    Conexao(){
        local=qApp->applicationDirPath();
        banco=local+"/db/controlEstoque.db";
        bancoDedados=QSqlDatabase::addDatabase("QSQLITE");
    }
    void fechar(){
        bancoDedados.close();
    }
    bool abrir(){
        bancoDedados.setDatabaseName("C:/project/ControleEstoque/ControlEstoque/db/controlEstoque.db");
        if(!bancoDedados.open()){
           return false;
        }else{
            return true;
        }
    }
    bool aberto(){
        if(!bancoDedados.isOpen()){
           return true;
        }else{
            return false;
        }
    }
};

#endif // CONEXAO_H
