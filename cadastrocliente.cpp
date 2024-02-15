#include "cadastrocliente.h"
#include "ui_cadastrocliente.h"
#include <QMessageBox>

cadastroCliente::cadastroCliente(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::cadastroCliente)
{
    ui->setupUi(this);
}

cadastroCliente::~cadastroCliente()
{
    delete ui;
}

void cadastroCliente::on_pushButton_criarCliente_clicked()
{

    openDatabase();

    QString cpfInput = ui->lineEdit2->text();
    QString senhaInput = ui->lineEdit_senha->text();
    QString enderecoInput = ui->lineEdit_endereco->text();
    QString telefoneInput = ui->lineEdit_telefone->text();

    QSqlQuery query;

    query.prepare("insert into clientes (cpf,senha,endereco,telefone) values('"+cpfInput+"', '"+senhaInput+"', '"+enderecoInput+"', '"+telefoneInput+"')");

    if(query.exec()){
        QMessageBox::information(this, tr("Save"), tr("Saved"));
        closeDatabase();
    }
    else
        QMessageBox::critical(this, tr("error: "), query.lastError().text());

}
