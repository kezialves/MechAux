#include "menuadminwindow.h"
#include "ui_menuadminwindow.h"
#include <QStandardItem>

menuAdminWindow::menuAdminWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::menuAdminWindow)
{
    ui->setupUi(this);
    openContasDatabase();

    QSqlQueryModel* model = new QSqlQueryModel;
    model->setQuery("select cpf from funcionarios");

    ui->listView_Funcionarios->setModel(model);

    closeContasDatabase();

    openContasDatabase();

    QSqlQueryModel* modelCleintes = new QSqlQueryModel;
    modelCleintes->setQuery("select cpf from clientes");

    ui->listView_Cleintes->setModel(modelCleintes);

    closeContasDatabase();

    openItensDatabase();

    QSqlQueryModel* modelItens = new QSqlQueryModel;
    modelItens->setQuery("select nome from itens");

    QStandardItemModel* combinedModel = new QStandardItemModel;
    combinedModel->setColumnCount(1);

    for (int i = 0; i < modelItens->rowCount(); ++i) {
        QString nome = modelItens->record(i).value("nome").toString();
        QStandardItem* item = new QStandardItem(nome);
        combinedModel->appendRow(item);
    }

    closeItensDatabase();

    openVeiculosDatabase();

    QSqlQueryModel* modelVeiculos = new QSqlQueryModel;
    modelVeiculos->setQuery("select placa from veiculos");

    for (int i = 0; i < modelVeiculos->rowCount(); ++i) {
        QString placa = modelVeiculos->record(i).value("placa").toString();
        QStandardItem* item = new QStandardItem(placa);
        combinedModel->appendRow(item);
    }

    closeVeiculosDatabase();

    ui->listView_Estoque->setModel(combinedModel);
}

menuAdminWindow::~menuAdminWindow()
{
    delete ui;
}

void menuAdminWindow::on_toolButton_adicionarFuncionario_clicked()
{
    funcionariosWindow.show();
}


void menuAdminWindow::on_toolButton_adicionarEstoque_clicked()
{
    estoquesWindow.show();
}


void menuAdminWindow::on_toolButton_adicionarCleintes_clicked()
{
    clientesWindow.show();
}


void menuAdminWindow::on_refreshClientes_clicked()
{
    openContasDatabase();

    QSqlQueryModel* model = new QSqlQueryModel;
    model->setQuery("select cpf from clientes");

    ui->listView_Cleintes->setModel(model);

    closeContasDatabase();
}


void menuAdminWindow::on_refreshFuncionarios_clicked()
{
    openContasDatabase();

    QSqlQueryModel* model = new QSqlQueryModel;
    model->setQuery("select cpf from funcionarios");

    ui->listView_Funcionarios->setModel(model);

    closeContasDatabase();
}


void menuAdminWindow::on_refreshEstoque_clicked()
{
    openItensDatabase();

    QSqlQueryModel* modelItens = new QSqlQueryModel;
    modelItens->setQuery("select nome from itens");

    QStandardItemModel* combinedModel = new QStandardItemModel;
    combinedModel->setColumnCount(1);

    for (int i = 0; i < modelItens->rowCount(); ++i) {
        QString nome = modelItens->record(i).value("nome").toString();
        QStandardItem* item = new QStandardItem(nome);
        combinedModel->appendRow(item);
    }
    
    closeItensDatabase();
    
    openVeiculosDatabase();
    
    QSqlQueryModel* modelVeiculos = new QSqlQueryModel;
    modelVeiculos->setQuery("select placa from veiculos");
    
    for (int i = 0; i < modelVeiculos->rowCount(); ++i) {
        QString placa = modelVeiculos->record(i).value("placa").toString();
        QStandardItem* item = new QStandardItem(placa);
        combinedModel->appendRow(item);
    }
    
    closeVeiculosDatabase();

    ui->listView_Estoque->setModel(combinedModel);
}
