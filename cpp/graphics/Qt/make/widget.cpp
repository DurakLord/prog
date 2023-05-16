#include "widget.h"
#include <QApplication>
#include <QProgressBar>
#include <iostream>
myWidget::myWidget(QWidget * parent) : QWidget(parent){
    // Set size of the window
 setFixedSize(400, 200);

 clickCounter = 0;

 // Create and position the button
 button = new QPushButton("Hello World", this);
 button->setGeometry(40, 40, 240, 90);
 button->setToolTip("How's going there ?");
 button->setCheckable(true);
 connect(button, SIGNAL (clicked(bool)), this, SLOT (Click(bool)));
}

void myWidget::Click(bool checked){
    if(checked){
        button->setGeometry(40, 40, 300, 150);
    }
    else
    button->setGeometry(40, 40, 240, 90);
    clickCounter++;
    if(clickCounter == 10){
        button->setGeometry(110, 110, 180, 80);
        clickCounter = 0;
    }
    // if (clickCounter == 10)
    // emit counterReached();
}


// void myWidget::counterReached(){
//     button->setGeometry(100, 100, 240, 90);
// }

