#include <QApplication>
#include "StartWindow.h"
#include "Country.h"
#include "Countries.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    StartWindow window;

    return app.exec();
}
