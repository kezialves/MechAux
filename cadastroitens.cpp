#include "cadastroitens.h"
#include "ui_cadastroitens.h"

cadastroItens::cadastroItens(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::cadastroItens)
{
    ui->setupUi(this);

    

}

cadastroItens::~cadastroItens()
{
    delete ui;
}

void cadastroItens::on_pushButton_criarItem_clicked()
{
    openDatabase();

    QString nomeInput = ui->lineEdit_nomeItem->text();
    QString precoInput = ui->lineEdit_precoItem->text();
    QString quantidadeInput = ui->lineEdit_quantidadeItem->text();
    QString descricaoInput = ui->lineEdit_descricaoItem->text();

    QSqlQuery query;

    query.prepare("insert into itens (nome,preço,quantidade,descrição) values('"+nomeInput+"', '"+precoInput+"', '"+quantidadeInput+"', '"+descricaoInput+"')");

    if(query.exec()){
        QMessageBox::information(this, tr("Save"), tr("Saved"));
        closeDatabase();
    }
    else
        QMessageBox::critical(this, tr("error: "), query.lastError().text());
}
