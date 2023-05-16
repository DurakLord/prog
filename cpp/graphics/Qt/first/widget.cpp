#include "widget.h"
#include <QApplication>
#include <QProgressBar>
myWidget::myWidget(QWidget * parent) : QWidget(parent){
    // Set size of the window
 setFixedSize(400, 200);

 // Create and position the button
 button = new QPushButton("Hello World", this);
 button->setGeometry(40, 40, 240, 90);
 button->setToolTip("How's going there ?");
 connect(button, SIGNAL (clicked()), this, SLOT(get()));
}

