/*
    PythonIDE/IDEWindow.cpp file, IDEWindow class implementation
*/
//  Includes
//  Python includes
#include "Python/Python.h"

//  Qt includes
#include <QVBoxLayout>
#include <QtGlobal>

//  PythonIDE includes
#include "PythonIDE/IDEWindow.h"

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
        //  Creation debug menu
        QMenu* debug_menu = new QMenu("Debug");
        {
            QAction* run_action = new QAction("Run");
            debug_menu->addAction(run_action);
            connect(run_action, &QAction::triggered, this, &IDEWindow::test_library_metod);
        }
        menu_bar->addMenu(debug_menu);
    }
}

void IDEWindow::test_library_metod(void)
{
    qWarning("TEST LIBRARY METHOD!");
    //  Python initialization
    Py_Initialize();
    PyRun_SimpleString("from time import time,ctime\n"
                       "print('Today is', ctime(time()))\n");
    //  Finalization of python
    Py_Finalize();
}

}
