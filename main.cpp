#include <QGuiApplication>
#include <QDebug>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    qDebug() << "Works!";
}
