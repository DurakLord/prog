#include "QApplication"
#include "QWidget"
// #include "QMainWindow"
#include "QLabel"
#include <iostream>
#include "widget.h"

// #include "QWindow"



int main(int argc, char **argv)
{
    QApplication app(argc, argv);
    myWidget *name = new myWidget();
    
    return app.exec();
}

