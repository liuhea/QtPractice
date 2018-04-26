#include "mywidget.h"
#include<QPushButton>
MyWidget::MyWidget(QWidget *parent)
    : QWidget(parent)
{
    // 对于父窗口（主窗口），坐标系统相对于屏幕
    // 原点：相对屏幕左上角
    // x: 往右递增
    // y:往下递增
    move(100,100);
    QPushButton *b1 = new QPushButton(this);
    // 子窗口，坐标系统相对于父窗口
    // 原点：相对于窗口空白区域左上角
    // x: 往右递增
    // y:往下递增
    b1->move(100,0);
    b1->setText("😆");
    b1->resize(200,100);

    // 坐标相对于父窗口 b1
    QPushButton *b2 = new QPushButton(b1);
    b2->setText("Inner 😆");
    b2->move(100,0);

}

MyWidget::~MyWidget()
{

}
