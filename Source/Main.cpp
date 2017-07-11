/*
        Main.cpp file, startup application implementation
*/
//  Includes
//  Qt includes
#include <QApplication>
//  Local includes
#include "IDEWindow.h"

/*!
    \fn int main(int argc, char* argv[])
    Runs application specified by supplied parameters
    Params: count of arguments, string arguments
    Return: application exit code
*/
int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    PythonIDE::IDEWindow w;
    w.show();
    return a.exec();
}
