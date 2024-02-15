#include "cadastrofuncionarios.h"
#include "ui_cadastrofuncionarios.h"
#include <QMessageBox>

cadastroFuncionarios::cadastroFuncionarios(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::cadastroFuncionarios)
{
    ui->setupUi(this);
}

cadastroFuncionarios::~cadastroFuncionarios()
{
    delete ui;
}

void cadastroFuncionarios::on_pushButton_criarItem_clicked()
{
    openDatabase();

    QString cpfInput = ui->lineEdit_cpf->text();
    QString enderecoInput = ui->lineEdit_endereco->text();
    QString telefoneInput = ui->lineEdit_telefone->text();
    QString emailInput = ui->lineEdit_email->text();
    QString senhaInput = ui->lineEdit_senha->text();
    QString contabancariaInput = ui->lineEdit_conta->text();
    QString grauInput = ui->lineEdit_grau_instrucao->text();
    QString experienciaInput = ui->lineEdit_experiencia->text();
    QString historicoInput = ui->lineEdit_historico->text();

    QSqlQuery query;

    query.prepare("insert into funcionarios (cpf,endereco,telefone,email,senha,contabancaria,grauinstrucao,experiencia,historico) values('"+cpfInput+"', '"+enderecoInput+"', '"+telefoneInput+"', '"+emailInput+"','"+senhaInput+"','"+contabancariaInput+"','"+grauInput+"','"+experienciaInput+"', '"+historicoInput+"')");

    if(query.exec()){
        QMessageBox::information(this, tr("Save"), tr("Saved"));
        closeDatabase();
    }
    else
        QMessageBox::critical(this, tr("error: "), query.lastError().text());
}

