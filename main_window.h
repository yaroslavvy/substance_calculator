#ifndef SUBSTANCE_CALCULATOR_MAINWINDOW_H
#define SUBSTANCE_CALCULATOR_MAINWINDOW_H

#include <QMainWindow>

namespace ui {
    class MainWindow : public QMainWindow {
        Q_OBJECT

    public:
        MainWindow(QWidget *parent = nullptr);
        ~MainWindow();

    private slots:
        void slotAbout();

    };
}

#endif // SUBSTANCE_CALCULATOR_MAINWINDOW_H
