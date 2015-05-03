#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dbmanager.h"
#include <QCryptographicHash>

#include <QDebug>
#define cout qDebug()

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    user = new User;
    ui->setupUi(this);

    connect(ui->btnLogin, SIGNAL(clicked()), this, SLOT(login()));

}

void MainWindow::login()
{
    user->setName(ui->lineEditName->text());
    user->setPasswd(QCryptographicHash::hash(
                        ui->lineEditPasswd->text().toAscii(), QCryptographicHash::Md5));
    cout << user->getName() << user->getPasswd();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete user;
}
