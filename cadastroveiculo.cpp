#include "cadastroveiculo.h"

CadastroVeiculo::CadastroVeiculo(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CadastroVeiculo)
{
    ui->setupUi(this);
}

CadastroVeiculo::~CadastroVeiculo()
{
    delete ui;
}
