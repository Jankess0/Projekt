#include <QApplication>
#include "StartWindow.h"


int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    StartWindow window;

    return app.exec();
}
