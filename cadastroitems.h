#ifndef CADASTROITEMS_H
#define CADASTROITEMS_H

#include <QDialog>
#include "estoque.h"

namespace Ui {
class CadastroVeiculos;
}

class CadastroVeiculos : public QDialog
{
    Q_OBJECT

public:
    explicit CadastroVeiculos(QWidget *parent = nullptr);
    ~CadastroVeiculos();
    Estoque* getEstoque() const;

private slots:
    void on_CriarVeiculos_Pushed();

private:
    Estoque* estoque;
    Ui::CadastroVeiculos *ui;
};

#endif // CADASTROITEMS_H
