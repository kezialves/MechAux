//#include "cadastroveiculos.h"
#include "estoquewindow.h""
//#include "mainwindow.h"


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    estoqueWindow ew;
    ew.show();



    //CadastroVeiculos* cadastro = new CadastroVeiculos(nullptr, v1);
    //cadastro->show();

    return a.exec();
}
