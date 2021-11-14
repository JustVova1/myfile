#include "mywidget.h"

myWidget::myWidget(QWidget *parent): QMainWindow(parent)
{

    sb1 = new QSpinBox(this);
    sb1->setMaximum(500);
    sb1->move(10,100);

    sb2 = new QSpinBox(this);
    sb2->move(10,200);
    sb2->setMaximum(500);


    sb3 = new QSpinBox(this);
    sb3->move(150,100);
    sb3->setMaximum(1000);


    sb4 = new QSpinBox(this);
    sb4->move(150,200);
    sb4->setMaximum(1000);



    resize(500,500);

}
void myWidget ::resizeEvent(QResizeEvent *e){
    QSize size= e->size();
    int h =size.height();
    sb3->setValue(h);
    int w =size.width();
    sb4->setValue(w);


    QPoint a(1,1);
    int tl = a.;
    sb1->setValue(tl);
}

myWidget::~myWidget()
{
}

