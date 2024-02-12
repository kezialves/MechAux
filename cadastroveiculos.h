#ifndef CADASTROVEICULOS_H
#define CADASTROVEICULOS_H

#include <QDialog>
#include <QtSql>
#include <QtDebug>

namespace Ui {
class CadastroVeiculos;
}

class CadastroVeiculos : public QDialog
{
    Q_OBJECT

public:


    QSqlDatabase db;

    void closeDatabase(){
        db.close();
    }

    bool openDatabase(){

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

    explicit CadastroVeiculos(QWidget *parent = nullptr);
    ~CadastroVeiculos();

private slots:
    void on_CriarVeiculos_Pushed();

private:
    Ui::CadastroVeiculos *ui;
};

#endif // CADASTROVEICULOS_H
