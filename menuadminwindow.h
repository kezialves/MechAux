#ifndef MENUADMINWINDOW_H
#define MENUADMINWINDOW_H

#include <QDialog>
#include "cadastrofuncionarios.h"
#include "cadastrocliente.h"
#include "estoquewindow.h"

namespace Ui {
class menuAdminWindow;
}

class menuAdminWindow : public QDialog
{
    Q_OBJECT

public:

    QSqlDatabase contasDb;
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

    bool openContasDatabase(){

        QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
        db.setDatabaseName("../database/contas.db");

        if(!db.open()){
            qDebug()<<("Failed to open database");
            return false;
        }
        else{
            qDebug()<<("Conected to the database");
            return false;
        }

    }

    void closeContasDatabase(){
        contasDb.close();
    }

    explicit menuAdminWindow(QWidget *parent = nullptr);
    ~menuAdminWindow();

private slots:
    void on_toolButton_adicionarFuncionario_clicked();

    void on_toolButton_adicionarEstoque_clicked();

    void on_toolButton_adicionarCleintes_clicked();

    void on_refreshClientes_clicked();

    void on_refreshFuncionarios_clicked();

    void on_refreshEstoque_clicked();

private:
    cadastroFuncionarios funcionariosWindow;
    cadastroCliente clientesWindow;
    estoqueWindow estoquesWindow;
    Ui::menuAdminWindow *ui;
};

#endif // MENUADMINWINDOW_H
