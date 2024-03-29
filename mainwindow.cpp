#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QProcess>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->tunneling_checkbox,SIGNAL(toggled(bool)),
            ui->tunnelhostname_input,SLOT(setEnabled(bool)));
    connect(ui->actionExit,SIGNAL(triggered()),
            ui->actionExit,SLOT(trigger()));

}

MainWindow::~MainWindow()
{

    delete ui;
}

void MainWindow::on_submit_restart_cntlm_clicked()
{
    QProcess::execute ("service cntlm restart");
}

void MainWindow::on_submit_stop_cntlm_clicked()
{
    QProcess::execute ("service cntlm stop");

}

void MainWindow::on_submit_start_cntlm_clicked()
{
    QProcess::execute ("service cntlm start");

}

void MainWindow::on_submit_generate_hash_clicked()
{
    QString username;
    username = ui->username_input->text();
    //password = ui->password_input->text();
    //domain = ui->domain_input->text();
    QProcess::execute("cntlm -u username@domain -p password -I -M http://www.google.com");
}


void MainWindow::on_tunneling_checkbox_toggled(bool checked)
{

}
