#include "mainwindow.h"
#include <QApplication>

// QApplication 应用程序类
// Qt头文件没有.h
// Qt头文件和类名一样

int main(int argc, char *argv[])
{
    // 有且只有一个应用程序类的对象
    QApplication a(argc, argv);

    //-----------------------start 我们要写代码区域-------------------
    // 继承自QWidget，是一个窗口基类
    // 所以是一个QWidget也是一个窗口类，w是一个窗口。
    MainWindow w;
    // 窗口默认创建是隐藏的，需要手动显示
    w.show();
    //-----------------------end 我们要写代码区域-------------------

    // 让程序一直执行，等待用户操作（等待事件发生）
    return a.exec();
}
