#include <QApplication>
#include<QWidget> //窗口控件基类
#include<QPushButton>

int main(int argc,char **argv){
    QApplication app(argc,argv);
    QWidget w;
    w.setWindowTitle("标题");


    QPushButton b;
    b.setText("QPushButton 设置按钮内容"); // 设置按钮内容
//  b.show();

    /*
     * 如果不指定父对象，对象和对象（窗口和窗口）是独立的
     * a指定b为它的父对象，a放在b的上面
     * 指定父对象，有两种方式
     *      1. setParent()
     *      2. 构造函数传参
     * 指定父对象，只需要父对象显示，上边的子对象自动显示。
     */
     b.setParent(&w); // 指定父对象
     b.setText("setParent() 指定父对象"); // 设置按钮内容
     b.move(100,100); // 移动坐标

     QPushButton b1(&w);
     b1.move(100,150);
     b1.setText("构造传递父对象，指定父对象");

     w.show();
    return app.exec();
}
