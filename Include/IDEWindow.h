/*
    PythonIDE/IDEWindow.h file
*/
//  Inlude guards begin
#ifndef PYTHON_IDE_IDEWINDOW_H_INCLUDED__
#define PYTHON_IDE_IDEWINDOW_H_INCLUDED__

//  Includes
//  Qt includes
#include <QMainWindow>

//  PythonIDE namespace
namespace PythonIDE
{

//  Classes
/*!
    \class  IDEWindow
    \brief  Represents main window of PythonIDE app
*/
class IDEWindow : public QMainWindow
{
    Q_OBJECT
public:
    //  Constructors/destructor
    /*!
        \fn IDEWindow(void);
        IDEWindow default constructor
    */
    IDEWindow(void);
    /*!
        \fn ~IDEWindow(void)
        IDEWindow destructor
    */
    ~IDEWindow(void);
};

//  PythonIDE namespace end
}

//  Inlude guards end
#endif
