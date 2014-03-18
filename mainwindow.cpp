#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QProcess>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


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
    QProcess::execute("");
}

void MainWindow::on_tunneling_checkbox_toggled(bool checked)
{
    if (MainWindow::on_tunneling_checkbox_toggled = (1))
    {
 ui->tunnelhostname_input->setEnabled(1);
 ui->tunnellocalport_input->setEnabled(1);
    }
        else
        {
        ui->tunnelhostname_input->setEnabled(0);
        ui->tunnellocalport_input->setEnabled(0);
        }
}

