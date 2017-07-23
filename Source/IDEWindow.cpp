/*
    PythonIDE/IDEWindow.cpp file, IDEWindow class implementation
*/
//  Includes
//  Qt includes
#include <QVBoxLayout>

//  Local includes
#include "IDEWindow.h"

//  PythonIDE namespace
namespace PythonIDE
{

//  IDEWindow constructors/destructor
IDEWindow::IDEWindow(void)
    : QMainWindow(nullptr), m_py_edit(nullptr)
{
    //  Initialization of menus
    initialize_menus();
    {
        //  Initialization of central widget
        //  Creation default text edit (NOTE: (alex) remove this code!)
        m_py_edit = new QTextEdit(this);
        setCentralWidget(m_py_edit);
    }
}

IDEWindow::~IDEWindow()
{
}

//  IDEWindow - private methods
void IDEWindow::initialize_menus(void)
{
    QMenuBar* const menu_bar = menuBar();
    {
        //  Creation file menu
        menu_bar->addMenu("File");
    }
    {
        //  Creation edit menu
        menu_bar->addMenu("Edit");
    }
    {
        //  Creation run menu
        menu_bar->addMenu("Run");
    }
}

}
