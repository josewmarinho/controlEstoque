#include "mw_gestaovendas.h"
#include "ui_mw_gestaovendas.h"
#include <QtSql>
#include <QDebug>

#include <QPrinter>
#include <QPainter>
#include <QDir>
#include <QDesktopServices>

mw_gestaoVendas::mw_gestaoVendas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mw_gestaoVendas)
{
    ui->setupUi(this);

    ui->tw_listaVendas->horizontalHeader()->setVisible(true);
    ui->tw_listaVendas->setColumnCount(9);
    QStringList cabe2={"ID","Data","Hora","Colab","V.Total","Qtde","Produto","V.Uni","Total.Venda"};
    ui->tw_listaVendas->horizontalHeader()->setVisible(true);
    ui->tw_listaVendas->setHorizontalHeaderLabels(cabe2);
    ui->tw_listaVendas->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tw_listaVendas->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tw_listaVendas->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tw_listaVendas->setEditTriggers(QAbstractItemView::NoEditTriggers);

    con.abrir();
    int contLinhas=0;
    QSqlQuery query;
    query.prepare("select * from tb_vendas");
    query.exec();
    query.first();
    do{
        ui->tw_listaVendas->insertRow(contLinhas);
        ui->tw_listaVendas->setItem(contLinhas,0,new QTableWidgetItem(query.value(0).toString()));
        ui->tw_listaVendas->setItem(contLinhas,1,new QTableWidgetItem(query.value(1).toString()));
        ui->tw_listaVendas->setItem(contLinhas,2,new QTableWidgetItem(query.value(2).toString()));
        ui->tw_listaVendas->setItem(contLinhas,3,new QTableWidgetItem(query.value(3).toString()));
        ui->tw_listaVendas->setItem(contLinhas,4,new QTableWidgetItem(query.value(4).toString()));
        ui->tw_listaVendas->setItem(contLinhas,5,new QTableWidgetItem(query.value(6).toString()));
        ui->tw_listaVendas->setItem(contLinhas,6,new QTableWidgetItem(query.value(7).toString()));
        ui->tw_listaVendas->setItem(contLinhas,7,new QTableWidgetItem(query.value(8).toString()));
        ui->tw_listaVendas->setItem(contLinhas,8,new QTableWidgetItem(query.value(9).toString()));
        contLinhas++;
    }while(query.next());
    con.fechar();
}

mw_gestaoVendas::~mw_gestaoVendas()
{
    delete ui;
}


void mw_gestaoVendas::on_btn_filtrar_clicked()
{
    ui->tw_listaVendas->clearContents();
    ui->tw_listaVendas->setRowCount(0);
    con.abrir();
    int contLinhas=0;
    QSqlQuery query;
    query.prepare("select * from tb_vendas where data_venda between '"+ui->de_dataini->text()+"' and '"+ui->de_datafim->text()+"'");
    query.exec();
    query.first();
    do{
        ui->tw_listaVendas->insertRow(contLinhas);
        ui->tw_listaVendas->setItem(contLinhas,0,new QTableWidgetItem(query.value(0).toString()));
        ui->tw_listaVendas->setItem(contLinhas,1,new QTableWidgetItem(query.value(1).toString()));
        ui->tw_listaVendas->setItem(contLinhas,2,new QTableWidgetItem(query.value(2).toString()));
        ui->tw_listaVendas->setItem(contLinhas,3,new QTableWidgetItem(query.value(3).toString()));
        ui->tw_listaVendas->setItem(contLinhas,4,new QTableWidgetItem(query.value(4).toString()));
        ui->tw_listaVendas->setItem(contLinhas,5,new QTableWidgetItem(query.value(6).toString()));
        ui->tw_listaVendas->setItem(contLinhas,6,new QTableWidgetItem(query.value(7).toString()));
        ui->tw_listaVendas->setItem(contLinhas,7,new QTableWidgetItem(query.value(8).toString()));
        ui->tw_listaVendas->setItem(contLinhas,8,new QTableWidgetItem(query.value(9).toString()));
        contLinhas++;
    }while(query.next());
    con.fechar();
}

void mw_gestaoVendas::on_btn_relatorioPDF_clicked()
{
    QString nome=QDir::currentPath()+"/relatorio_vendas.pdf";

    QPrinter printer;
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setOutputFileName(nome);

    QPainter painter;
    if(!painter.begin(&printer)){
        qDebug() << "ERRO ao abrir PDF";
        return;
    }

    int linha=250;
    int salto=20;

    painter.drawPixmap(25,25,QPixmap(":/imagens/imgs/titulo.png"));

    painter.drawText(25,225,"IDs:");
    painter.drawText(50,225,"Data:");
    painter.drawText(150,225,"Hora");
    painter.drawText(230,225,"Colab");
    painter.drawText(300,225,"V.Total");
    painter.drawText(370,225,"Qtde:");
    painter.drawText(440,225,"Produto:");
    painter.drawText(600,225,"V.Uni:");
    painter.drawText(670,225,"Total.Venda:");

    for(int i=0;i<ui->tw_listaVendas->rowCount();i++){
        painter.drawText(25,linha,ui->tw_listaVendas->item(i,0)->text());
        painter.drawText(50,linha,ui->tw_listaVendas->item(i,1)->text());
        painter.drawText(150,linha,ui->tw_listaVendas->item(i,2)->text());
        painter.drawText(230,linha,ui->tw_listaVendas->item(i,3)->text());
        painter.drawText(300,linha,ui->tw_listaVendas->item(i,4)->text());
        painter.drawText(370,linha,ui->tw_listaVendas->item(i,5)->text());
        painter.drawText(440,linha,ui->tw_listaVendas->item(i,6)->text());
        painter.drawText(600,linha,ui->tw_listaVendas->item(i,7)->text());
        painter.drawText(670,linha,ui->tw_listaVendas->item(i,8)->text());
        linha+=salto;
    }

    //printer.newPage();
    //painter.drawText(25,25,"ITENS");

    painter.end();
    QDesktopServices::openUrl(QUrl("file:///"+nome));
}


void mw_gestaoVendas::on_tw_listaVendas_itemSelectionChanged()
{

}
