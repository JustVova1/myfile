#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QMainWindow>
#include <QWidget>
#include <QResizeEvent>
#include <QGridLayout>
#include <QLCDNumber>
#include <QSpinBox>
#include <QPoint>
class myWidget : public QMainWindow
{
    Q_OBJECT
private:
    QSpinBox *sb1;
    QSpinBox *sb2;
    QSpinBox *sb3;
    QSpinBox *sb4;
    QSpinBox *sb5;
    QSpinBox *sb6;
    QSpinBox *sb7;
    QSpinBox *sb8;
    QLCDNumber *num1;
    QLCDNumber *num2;
    QBoxLayout *box1;


public:
    myWidget(QWidget *parent = nullptr);
    ~myWidget();

protected:
    virtual void resizeEvent(QResizeEvent * e);
};
#endif // MYWIDGET_H
