#include <QCoreApplication>
#include <QTimer>
#include "exampleclass.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ExampleClass obj;

    QTimer::singleShot(0, &obj, &ExampleClass::startToWait);

    return a.exec();
}

