#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QKeyEvent>

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
    void on_button_100_0_clicked();
    void on_button_100_1_clicked();
    void on_button_100_2_clicked();
    void on_button_100_3_clicked();
    void on_button_100_4_clicked();
    void on_button_200_0_clicked();
    void on_button_200_1_clicked();
    void on_button_200_2_clicked();
    void on_button_200_3_clicked();
    void on_button_200_4_clicked();
    void on_button_300_0_clicked();
    void on_button_300_1_clicked();
    void on_button_300_2_clicked();
    void on_button_300_3_clicked();
    void on_button_300_4_clicked();
    void on_button_400_0_clicked();
    void on_button_400_1_clicked();
    void on_button_400_2_clicked();
    void on_button_400_3_clicked();
    void on_button_400_4_clicked();
    void on_button_500_0_clicked();
    void on_button_500_1_clicked();
    void on_button_500_2_clicked();
    void on_button_500_3_clicked();
    void on_button_500_4_clicked();

private:
    Ui::MainWindow *ui;
    void getAnswer(int value,int category);
    void keyPressEvent(QKeyEvent* e);
};

#endif // MAINWINDOW_H
