#include "estoquewindow.h"
#include "ui_estoquewindow.h"
#include "cadastroitems.h"

estoqueWindow::estoqueWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::estoqueWindow)
{
    ui->setupUi(this);

}

estoqueWindow::~estoqueWindow()
{
    delete ui;
}


void estoqueWindow::on_toolButton_adicionarItem_clicked()
{
    cadastrowindow.show();
    estoque = cadastrowindow.getEstoque();

}






void estoqueWindow::on_toolButton_adicionarVeiculo_clicked()
{
    veiculosWindow.show();
}

