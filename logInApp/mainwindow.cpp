#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "QMessageBox"
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/img/colorlib-login-form-06.jpg");
    int w= ui->label_3_pic->width();
    int h= ui->label_3_pic->height();
     ui->label_3_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

    ui->lineEdit_pass->setEchoMode(QLineEdit::Password);
    ui->statusbar->addPermanentWidget(ui->dateTimeEdit,1);
    ui->statusbar->addPermanentWidget(ui->progressBar,1);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_login_clicked()
{

     QString username = ui->lineEdit_name->text(),
        pass=ui->lineEdit_pass->text() ;

    if(username == "bassam" && pass == "1234"){
        QMessageBox::information(this,"LogIn","correct");
        ui->statusbar->show();
        ui->statusbar->showMessage("passqord and username correct",2000);

        hide();
        sec = new secDialog();
        sec->setModal(true);
        sec->show();
        sec->exec();
        show();
     }else{
        QMessageBox::warning(this,"LogIn","Password or username incorrect");
        ui->statusbar->showMessage("passqord and username incorrect",1000);
    }
}

