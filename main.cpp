#include "stdafx.h"
#include "MillenniumMusic.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MillenniumMusic w;
    w.show();
    return a.exec();
}
