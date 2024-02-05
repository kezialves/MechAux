#ifndef ESTOQUEWINDOW_H
#define ESTOQUEWINDOW_H

#include <QDialog>
#include "estoque.h"
#include "cadastroitems.h"
#include "cadastroveiculos.h"

namespace Ui {
class estoqueWindow;
}

class estoqueWindow : public QDialog
{
    Q_OBJECT

public:
    explicit estoqueWindow(QWidget *parent = nullptr);
    ~estoqueWindow();
private slots:
    void on_toolButton_adicionarItem_clicked();


    void on_toolButton_adicionarVeiculo_clicked();

private:
    cadastroVeiculos veiculosWindow;
    CadastroVeiculos cadastrowindow;
    Estoque* estoque;
    Ui::estoqueWindow *ui;
};

#endif // ESTOQUEWINDOW_H
