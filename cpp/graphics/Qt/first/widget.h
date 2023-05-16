#ifndef MY_WIDGET_H
#define MY_WIDGET_H
#include <QWidget>
#include <QPushButton>
#include <iostream>


class myWidget : public QWidget{
    Q_OBJECT
    public:
    explicit myWidget(QWidget *parent = 0);
    QPushButton *button;
    public slots:
    void get(){
        std::cout << "Hello";
    };
};

#endif



