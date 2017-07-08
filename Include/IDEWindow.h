#ifndef IDEWINDOW_H
#define IDEWINDOW_H

#include <QMainWindow>

class IDEWindow : public QMainWindow
{
    Q_OBJECT

public:
    IDEWindow(QWidget *parent = 0);
    ~IDEWindow();
};

#endif // IDEWINDOW_H
