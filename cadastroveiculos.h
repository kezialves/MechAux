#ifndef CADASTROVEICULOS_H
#define CADASTROVEICULOS_H

#include <QDialog>

namespace Ui {
class cadastroVeiculos;
}

class cadastroVeiculos : public QDialog
{
    Q_OBJECT

public:
    explicit cadastroVeiculos(QWidget *parent = nullptr);
    ~cadastroVeiculos();

private:
    Ui::cadastroVeiculos *ui;
};

#endif // CADASTROVEICULOS_H
