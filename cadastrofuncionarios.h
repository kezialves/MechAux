#ifndef CADASTROFUNCIONARIOS_H
#define CADASTROFUNCIONARIOS_H

#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QMessageBox>

namespace Ui {
class cadastroFuncionarios;
}

class cadastroFuncionarios : public QDialog
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
    explicit cadastroFuncionarios(QWidget *parent = nullptr);
    ~cadastroFuncionarios();

private slots:
    void on_pushButton_criarItem_clicked();

private:
    Ui::cadastroFuncionarios *ui;
};

#endif // CADASTROFUNCIONARIOS_H
