#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void int_toolBar();

    void myNew();
    void myOpen();
    void mySave();
    void mySaveAs();
    void myExit();
    void myCopy();
    void myPaste();
    void myCut();
    //void myExit();
    void myRedo();
    void myUndo();


private:
    Ui::MainWindow *ui;
    QToolBar *toolbar;

};
#endif // MAINWINDOW_H
