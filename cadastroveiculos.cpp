#include "cadastroveiculos.h"
#include "ui_cadastroveiculos.h"

cadastroVeiculos::cadastroVeiculos(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::cadastroVeiculos)
{
    ui->setupUi(this);
}

cadastroVeiculos::~cadastroVeiculos()
{
    delete ui;
}
