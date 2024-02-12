#ifndef CADASTROITENS_H
#define CADASTROITENS_H

#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QMessageBox>

namespace Ui {
class cadastroItens;
}

class cadastroItens : public QDialog
{
    Q_OBJECT

public:
    QSqlDatabase db;

    void closeDatabase(){
        db.close();
    }

    bool openDatabase(){

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
    explicit cadastroItens(QWidget *parent = nullptr);
    ~cadastroItens();

private slots:
    void on_pushButton_criarItem_clicked();

private:
    Ui::cadastroItens *ui;
};

#endif // CADASTROITENS_H
