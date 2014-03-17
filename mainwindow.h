#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QProcess>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    void on_submit_restart_cntlm_clicked();

    void on_submit_stop_cntlm_clicked();

    void on_submit_start_cntlm_clicked();
    void on_submit_generate_hash_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
