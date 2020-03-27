#include "mainwidget.h"
#include "tool4dumper.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // 崩溃自动生成dump文件进行调试定位
    Tool4Dumper tool4dumper;
    Q_UNUSED(tool4dumper)

    MainWidget w;
    w.show();

    return a.exec();
}
