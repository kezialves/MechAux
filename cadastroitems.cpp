#include "cadastroitems.h"
#include "ui_cadastroitems.h"
#include "item.h"


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
    // Retrieve text from the QLineEdit and assign it to a variable

    Estoque* estoque = new Estoque();
    Item* item = new Item();

    QString nomeInput = ui->lineEdit_nomeItem->text();
    QString precoInput = ui->lineEdit_precoItem->text();
    QString quantidadeInput = ui->lineEdit_quantidadeItem->text();
    QString descricaoInput = ui->lineEdit_descricaoItem->text();

    item->setNome(nomeInput.toStdString());
    item->setPreco(nomeInput.toFloat());
    item->setQuantidade(nomeInput.toInt());
    item->setDescricao(nomeInput.toStdString());

    estoque->adicionaItem(item);

    // Now, 'userInput' contains the text from the QLineEdit
    // You can use 'userInput' as needed in your application
}

Estoque* CadastroVeiculos::getEstoque() const{
    return estoque;
}
