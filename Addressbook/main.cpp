#include <QtGui/QApplication>
#include "addressoverviewwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AddressOverviewWindow w;
    w.show();
    
    return a.exec();
}
