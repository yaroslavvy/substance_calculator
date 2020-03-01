#include "main_window.h"
#include <QMenu>
#include <QMenuBar>
#include <QMessageBox>
#include <QStatusBar>
#include <QTranslator>
#include <QHBoxLayout>
#include <QDebug>
#include "central_widget.h"

ui::MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setCentralWidget(new ui::CentralWidget());

    QMenu* pmenuHelp = new QMenu(tr("&Help"));
    pmenuHelp->addAction(tr("&About"), this, SLOT(slotAbout()), Qt::Key_F1);

    menuBar()->addMenu(pmenuHelp);

    setWindowIcon(QIcon("../resources/pictures/logo/flask_26.png"));
    setWindowTitle(tr("Substance Calculator v1.0"));

    if (true) { //TODO1:impl if successful loading data base
        statusBar()->showMessage(tr("Ready"), 2000);
    }
}

void ui::MainWindow::slotAbout() {
    QMessageBox::about(this, tr("About"), tr("Substance Calculator v1.0"));
}


ui::MainWindow::~MainWindow() {}
