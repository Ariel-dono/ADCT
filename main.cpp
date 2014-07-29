/*
 * File:   main.cpp
 * Author: ariel
 *
 * Created on 20 de febrero de 2014, 05:33 AM
 */

#include <QApplication>
#include <qwidget.h>

#include "ADCT_GUI.h"

int main(int argc, char *argv[]) {
    // initialize resources, if needed
    // Q_INIT_RESOURCE(resfile);

    QApplication app(argc, argv);
    ADCT_GUI *adct = new ADCT_GUI();
    adct->show();
    // create and show your widgets here

    return app.exec();
}
