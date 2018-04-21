#include "mainwindow.h"
#include <QPushButton>
//#include "subwidget.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

   setWindowTitle("我家老大");
//   this->setWindowTitle("我家老大");

   b1.setParent(this);

   b1.setText("close window");

   b2=new QPushButton(this);
   b2->setText("b2");
   b2->move(50,50);

   connect(&b1,&QPushButton::pressed,this,&MainWindow::close);

   /* &b1: 信号发出者，指针类型
    * &QPushButton::pressed： 处理信号， &发送者的类名::信号名称
    *
    * this: 信号接收者
    * &MainWindow::close： 槽函数，信号处理函数 &接收者类名::槽函数名字
    *
    */

   /*
    * 自定义槽：普通函数的用法
    * Qt5:任意的成员函数，普通全局函数，静态函数。
    * 槽函数需要和信号一致（参数，返回值）
    * 由于信号都是没有返回值，所以，槽函数一定没有返回值。
    */
    connect(b2,&QPushButton::released,this,&MainWindow::mySlot);

    connect(b2,&QPushButton::released,&b1,&QPushButton::hide);

    /*
     * 信号：短信
     * 槽函数：接收短信的手机
     */

    b3.setParent(this);
    b3.setText("切换子窗口");
    b3.move(100,100);

    // 显示子窗口
//    sub.show();
}

void MainWindow::mySlot(){
    b2->setText("Change ");
}

MainWindow::~MainWindow()
{

}
