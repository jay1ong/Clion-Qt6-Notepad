#include <QApplication>

#include "notepad.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    Notepad w;
    w.show();
    return QApplication::exec();
}
