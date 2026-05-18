#include "nailStudio.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    nailStudio window;
    window.show();
    return app.exec();
}
