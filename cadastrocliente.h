#ifndef CADASTROCLIENTE_H
#define CADASTROCLIENTE_H

#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QMessageBox>

namespace Ui {
class cadastroCliente;
}

class cadastroCliente : public QDialog
{
    Q_OBJECT

public:

    QSqlDatabase db;

    void closeDatabase(){
        db.close();
    }

    bool openDatabase(){

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
    explicit cadastroCliente(QWidget *parent = nullptr);
    ~cadastroCliente();

private slots:
    void on_pushButton_criarCliente_clicked();

private:
    Ui::cadastroCliente *ui;
};

#endif // CADASTROCLIENTE_H
