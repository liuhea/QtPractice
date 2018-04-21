#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
//#include "subwidget.h"
//子窗口头文件

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

    /**
     * 自定义槽函数
     * @brief mySlot
     */
    void mySlot();

private:
    QPushButton b1;
    QPushButton *b2;
    QPushButton b3;

//    SubWidget sub;

};

#endif // MAINWINDOW_H
