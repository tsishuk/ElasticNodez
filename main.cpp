#include <QApplication>
#include <QtWidgets>
#include "MainView.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    MainView* mv = new MainView;

    QMainWindow* wind = new QMainWindow();
    wind->setCentralWidget(mv);
    wind->show();

    return app.exec();
}
