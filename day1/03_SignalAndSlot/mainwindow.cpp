#include "mainwindow.h"
#include <QPushButton>
#include "subwidget.h"
#include<QDebug>

// 信号和槽：Qt对象之间通信的接口
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{

   setWindowTitle("我家老大");
//   this->setWindowTitle("我家老大");
   b2=new QPushButton(this);
   b2->setText("切换子窗口");
    b2->show();

    /* &b1: 信号发出者，指针类型
     * &QPushButton::pressed： 处理的信号， &发送者的类名::信号名称
     *
     * this: 信号接收者
     * &MainWindow::close： 槽函数，信号处理函数 &接收者类名::槽函数名字
     *
     */

   connect(&b1,&QPushButton::pressed,this,&MainWindow::close);

   /*
    * 自定义槽：普通函数的用法
    * Qt5:任意的成员函数，普通全局函数，静态函数。
    * 槽函数需要和信号一致（参数，返回值）
    * 由于信号都是没有返回值，所以，槽函数一定没有返回值。
    */
//    connect(b2,&QPushButton::released,this,&MainWindow::mySlot);

      connect(b2,&QPushButton::released,this,&MainWindow::changeWindow);

       /*
        * 处理子窗口的信号
        * 信号：短信
        * 槽函数：接收短信的手机
        */

      //函数重载的情况
      void (SubWidget::*funSignal)()=&SubWidget::mySignal;
      void (SubWidget::*testSignal)(int,QString)=&SubWidget::mySignal;

      connect(&sub,funSignal,this,&MainWindow::dealSub);

      connect(&sub,testSignal,this,&MainWindow::dealSlot);

      resize(300,300);
}

void MainWindow::mySlot(){
    b2->setText("Change ");
}

void MainWindow::dealSlot(int i,QString str){
   qDebug() <<i << str;
}

/**
 * 子窗口显示，本窗口隐藏
 * @brief MainWindow::changeWindow
 */
void MainWindow::changeWindow(){
    sub.show();
    this->hide();
}
void MainWindow::dealSub(){
    sub.hide();
    this->show();
}

MainWindow::~MainWindow()
{

}
