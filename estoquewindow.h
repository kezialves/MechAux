#ifndef ESTOQUEWINDOW_H
#define ESTOQUEWINDOW_H

#include <QDialog>
#include "estoque.h"
#include "cadastroitens.h"
#include "cadastroveiculos.h"

namespace Ui {
class estoqueWindow;
}

class estoqueWindow : public QDialog
{
    Q_OBJECT

public:

    QSqlDatabase itensDb;
    QSqlDatabase veiculosDb;

    bool openItensDatabase(){

        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("../database/itens.db");

        if(!db.open()){
            qDebug()<<("Failed to open database");
            return false;
        }
        else{
            qDebug()<<("Conected to the database");
            return false;
        }

    }

    void closeItensDatabase(){
        itensDb.close();
    }

    bool openVeiculosDatabase(){

        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("../database/veiculos.db");

        if(!db.open()){
            qDebug()<<("Failed to open database");
            return false;
        }
        else{
            qDebug()<<("Conected to the database");
            return false;
        }

    }

    void closeVeiculosDatabase(){
        veiculosDb.close();
    }

    void updateListView_Veiculos();
    explicit estoqueWindow(QWidget *parent = nullptr);
    ~estoqueWindow();
private slots:
    void on_toolButton_adicionarItem_clicked();


    void on_toolButton_adicionarVeiculo_clicked();

    void on_refreshVeiculos_clicked();

    void on_refreshItens_clicked();

private:
    cadastroItens itensWindow;
    CadastroVeiculos veiculosWindow;
    Ui::estoqueWindow *ui;
};

#endif // ESTOQUEWINDOW_H
