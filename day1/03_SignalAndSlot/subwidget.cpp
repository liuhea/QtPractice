#include "subwidget.h"

SubWidget::SubWidget(QWidget *parent) : QWidget(parent)
{
    setWindowTitle("我是小弟");
    setParent(this);
    b1.setText("切换到主窗口");
}
