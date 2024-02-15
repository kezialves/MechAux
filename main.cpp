//#include "cadastroveiculos.h"
#include "menuadminwindow.h"
//#include "mainwindow.h"


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    menuAdminWindow adminWindow;
    adminWindow.show();



    //CadastroVeiculos* cadastro = new CadastroVeiculos(nullptr, v1);
    //cadastro->show();

    return a.exec();
}
