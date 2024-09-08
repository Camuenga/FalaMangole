#include "falamangole.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    falamangole w;
    w.show();
    return a.exec();
}
