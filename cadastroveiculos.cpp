#include "cadastroveiculos.h"
#include "ui_cadastroveiculos.h"
#include <QMessageBox>


CadastroVeiculos::CadastroVeiculos(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CadastroVeiculos)
{
    ui->setupUi(this);
    connect(ui->pushButton_criarVeiculo, SIGNAL(clicked(bool)), this, SLOT(on_CriarVeiculos_Pushed()));

}

CadastroVeiculos::~CadastroVeiculos()
{
    delete ui;
}

void CadastroVeiculos::on_CriarVeiculos_Pushed()
{

    openDatabase();

    QString placaInput = ui->lineEdit_placa->text();
    QString modeloInput = ui->lineEdit_modelo->text();
    QString marcaInput = ui->lineEdit_marca->text();
    QString anoInput = ui->lineEdit_ano->text();
    QString eixosInput = ui->lineEdit_quantidadeEixos->text();

    QSqlQuery query;

    query.prepare("insert into veiculos (placa,modelo,marcar,ano,eixos) values('"+placaInput+"', '"+modeloInput+"', '"+marcaInput+"', '"+anoInput+"', '"+eixosInput+"')");

    if(query.exec()){
        QMessageBox::information(this, tr("Save"), tr("Saved"));
        closeDatabase();
    }
    else
        QMessageBox::critical(this, tr("error: "), query.lastError().text());
}



