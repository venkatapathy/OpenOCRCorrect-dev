#include "mainwindow.h"
#include <QApplication>
#include <git2.h>
#include <iostream>
int main(int argc, char *argv[])
{
	//int x = git_libgit2_init();
	//git_libgit2_shutdown();

	git_libgit2_init();
	//int y = x + 1;
	//std::cout << y;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
	int retnval = a.exec();
	git_libgit2_shutdown();
    return retnval;
}
