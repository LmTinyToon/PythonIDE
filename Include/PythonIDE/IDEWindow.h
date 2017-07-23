/*
    PythonIDE/IDEWindow.h file
*/
//  Inlude guards begin
#ifndef PYTHON_IDE_IDEWINDOW_H_INCLUDED__
#define PYTHON_IDE_IDEWINDOW_H_INCLUDED__

//  Includes
//  Qt includes
#include <QMainWindow>
#include <QMenuBar>
#include <QTextEdit>

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
private:
//  Private methods
    /*!
        \fn void initialize_menus(void)
        Performs initialization of menus of IDE
        Params: none
        Return: created menu bar
    */
    void initialize_menus(void);

//  Python file text edit
    QTextEdit* m_py_edit;
};

//  PythonIDE namespace end
}

//  Inlude guards end
#endif
