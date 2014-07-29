/* 
 * File:   ADCT_GUI.h
 * Author: ariel
 *
 * Created on 20 de febrero de 2014, 05:35 AM
 */

#ifndef _ADCT_GUI_H
#define	_ADCT_GUI_H

#include "ui_ADCT_GUI.h"
#include <QStandardItemModel>
#include <string>
#include <locale>
#include <time.h>
#include <iostream>
#include <math.h>

using std::string;
using std::tm;
using std::time_t;
using std::stringstream;
using std::cout;
        
class ADCT_GUI : public QDialog {
    Q_OBJECT
public:
    ADCT_GUI();
    virtual ~ADCT_GUI();
private:
    Ui::ADCT_GUI widget;
    QStandardItemModel * calendario;
    struct tm *tiempo;
    void distribuidor_calendario();
    void generadorMesActual();
    string obtieneMes(int);
    void representacionGraficaMes();
    void generadorFechaActual();
private slots:
    void generadorMesSiguiente();
    void generadorMesAnterior();
    void despliegueEventos(QModelIndex Indice);
    void backToEventos();
    void regresarADias();
    void nuevoEvento();
};

#endif	/* _ADCT_GUI_H */
