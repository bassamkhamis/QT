#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QToolBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    /***************/
    this->setCentralWidget(ui->plainTextEdit);
    toolbar = new QToolBar(this);
    int_toolBar();

    connect(ui->actionNew,&QAction::triggered,this,&MainWindow::myNew);
    connect(ui->actionCopy,&QAction::triggered,this,&MainWindow::myCopy);
    connect(ui->actionPaste,&QAction::triggered,this,&MainWindow::myPaste);
    connect(ui->actionCut,&QAction::triggered,this,&MainWindow::myCut);

    connect(ui->actionRedo,&QAction::triggered,this,&MainWindow::myRedo);
    connect(ui->actionUndo,&QAction::triggered,this,&MainWindow::myUndo);
//    connect(ui->actionPaste,&QAction::triggered,this,&MainWindow::myPaste);
//    connect(ui->actionCut,&QAction::triggered,this,&MainWindow::myCut);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete toolbar;
}

void MainWindow::int_toolBar()
{
        toolbar->addAction(ui->actionNew);
        toolbar->addAction(ui->actionOpen);
        toolbar->addAction(ui->actionSave);
        toolbar->addSeparator();
        toolbar->addAction(ui->actionSave_as);

    addToolBar(toolbar);

}

void MainWindow::myNew()
{
    qDebug()<<"myNew \n";
}

void MainWindow::myOpen()
{

}

void MainWindow::mySave()
{

}

void MainWindow::mySaveAs()
{

}

void MainWindow::myExit()
{

}

void MainWindow::myCopy()
{
    ui->plainTextEdit->copy();
}

void MainWindow::myPaste()
{
    ui->plainTextEdit->paste();
}

void MainWindow::myCut()
{
    ui->plainTextEdit->cut();
}

void MainWindow::myRedo()
{
    ui->plainTextEdit->redo();
}

void MainWindow::myUndo()
{
    ui->plainTextEdit->undo();
}



