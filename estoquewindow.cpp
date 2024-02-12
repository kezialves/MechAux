#include "estoquewindow.h"
#include "ui_estoquewindow.h"
#include "cadastroitens.h"

estoqueWindow::estoqueWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::estoqueWindow)
{
    ui->setupUi(this);

    openVeiculosDatabase();
    QSqlQueryModel* model = new QSqlQueryModel;
    model->setQuery("select placa from veiculos");
    ui->listView_Veiculos->setModel(model);
    closeVeiculosDatabase();


    openItensDatabase();
    QSqlQueryModel* model2 = new QSqlQueryModel;
    model2->setQuery("select nome from itens");
    ui->listView_Itens->setModel(model2);
    closeItensDatabase();
}

estoqueWindow::~estoqueWindow()
{
    delete ui;
}


void estoqueWindow::on_toolButton_adicionarItem_clicked()
{
    itensWindow.show();
}



void estoqueWindow::on_toolButton_adicionarVeiculo_clicked()
{
    veiculosWindow.show();
}


void estoqueWindow::on_refreshVeiculos_clicked()
{
    openVeiculosDatabase();

    QSqlQueryModel* model = new QSqlQueryModel;
    model->setQuery("select placa from veiculos");

    ui->listView_Veiculos->setModel(model);

    closeVeiculosDatabase();
}


void estoqueWindow::on_refreshItens_clicked()
{
    openItensDatabase();

    QSqlQueryModel* model = new QSqlQueryModel;
    model->setQuery("select nome from itens");

    ui->listView_Itens->setModel(model);

    closeItensDatabase();
}

