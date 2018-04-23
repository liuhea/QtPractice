#include "subwidget.h"

SubWidget::SubWidget(QWidget *parent) : QWidget(parent)
{
    setWindowTitle("我是小弟");
    b1.setParent(this);
    b1.setText("切换到主窗口");

    connect(&b1,&QPushButton::clicked,this,&SubWidget::sendSlot);

    resize(300,300);

}


void SubWidget::sendSlot(){
    emit mySignal();
}
