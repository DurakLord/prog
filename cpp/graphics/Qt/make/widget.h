#ifndef MY_WIDGET_H
#define MY_WIDGET_H
#include <QWidget>
#include <QPushButton>
#include <iostream>


class myWidget : public QWidget{
    Q_OBJECT
    public:
    explicit myWidget(QWidget *parent = 0);
    // signals:
    //     void counterReached();
    private slots:
    void Click(bool checked);
    private:
    QPushButton *button;
    int clickCounter;
};

#endif



