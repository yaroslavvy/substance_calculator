#include "main_window.h"
#include <QApplication>
#include "substance_parser.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ctrl::SubstanceParser substanceParser;

    ui::MainWindow w;
    w.show();

    return a.exec();
}
