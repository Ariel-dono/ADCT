/*
 * File:   ADCT_GUI.cpp
 * Author: ariel
 *
 * Created on 20 de febrero de 2014, 05:35 AM
 */

#include <sstream>

#include "ADCT_GUI.h"

/**
 * Constructor de la clase
 */
ADCT_GUI::ADCT_GUI() {
    widget.setupUi(this); // Se inicializan los componentes de la interfaz gráfica de usuario
    calendario = new QStandardItemModel(7, 7, widget.tableView); // Modelo de tabla (especifica dimensiones y el contenedor)
    distribuidor_calendario(); // Diseño de tabla (Nombres de las columnas y cantidad de filas y columnas)
    generadorMesActual(); // Muestra el mes actual en la parte superior de la ventana
    generadorFechaActual(); // Muestra la fecha actual en la parte inferior de la ventana
    representacionGraficaMes(); // Muestra el mes distribuido por la tabla
    widget.tableView->update(); // Actualiza la interfaz
    widget.listWidget->setVisible(false); // Oculta la lista que contiene las horas
    widget.pushButton_3->setVisible(false); // Oculta botón
    widget.frame->setVisible(false);
}

/**
 * Destructor de clase
 */
ADCT_GUI::~ADCT_GUI() {
    delete calendario; //Se eliminan objetos al finalizar la ejecución
    delete tiempo;
}

/**
 * Slot que genera lo necesario para mostrar el mes anterior en la tabla
 * Cada vez que se ejecuta muestra el mes anterior al mes que se muestra en pantalla.
 */
void ADCT_GUI::generadorMesAnterior(){
    calendario->clear(); //Limpia el modelo de la tabla
    tiempo->tm_mon--; //Retrocede al mes anterior
    if(tiempo->tm_mon < 0){ //En caso de que se retroceda lo necesario cambia de año
        tiempo->tm_year--;
        tiempo->tm_mon = 11;
    }
    
    string mes_anno = ""; //Cadena de chars que contendrá los datos mostrados en la parte superior de la pantalla
    mes_anno.append(obtieneMes(tiempo->tm_mon)); // Se agrega el nombre del mes correspondiente al número devuelto por la estructura "tiempo"
    mes_anno.append(" del ");
    stringstream acumulador;
    acumulador << (tiempo->tm_year + 1900); // Se agrega el año, se le adiciona 1900 ya que "tiempo" devuelve la cantidad de años transcurridos desde 1900
    string anno = acumulador.str();
    mes_anno.append(anno);
    widget.label->setText(QString(mes_anno.c_str())); // Se muestra en pantalla
    
    distribuidor_calendario(); // Se genera la primera fila de la tabla que contiene los días y se generan las filas y las columnas necesarias para mostrar el mes
    representacionGraficaMes(); // Se cargan los días del mes en la tabla
}

/**
 * Slot que genera lo necesario para mostrar el mes siguiente en la tabla
 * Cada vez que se ejecuta muestra el mes siguiente al mes que se muestra en pantalla.
 * El comportamiento del método es similar a "generadorMesAnterior" pero orientado a mostrar el mes siguiente de la forma anteriormente descrita
 */
void ADCT_GUI::generadorMesSiguiente(){
    calendario->clear();
    tiempo->tm_mon++;
    if(tiempo->tm_mon > 11){
        tiempo->tm_year++;
        tiempo->tm_mon = 0;
    }
    
    string mes_anno = "";
    mes_anno.append(obtieneMes(tiempo->tm_mon));
    mes_anno.append(" del ");
    stringstream acumulador;
    acumulador << (tiempo->tm_year + 1900);
    string anno = acumulador.str();
    mes_anno.append(anno);
    widget.label->setText(QString(mes_anno.c_str()));
    
    distribuidor_calendario();
    representacionGraficaMes();
}

/**
 * Slot de la tabla que muestra las horas del día
 * @param Indice
 */
void ADCT_GUI::despliegueEventos(QModelIndex Indice){
    widget.listWidget->setVisible(true); 
    widget.pushButton_3->setVisible(true);
    widget.pushButton_4->setVisible(false);
    widget.tableView->setVisible(false);
    widget.pushButton->setVisible(false);
    widget.pushButton_2->setVisible(false);
    
    /**
     * Se muestra la fecha electa en la parte inferior de la pantalla
     */    
    stringstream acumulador2;
    acumulador2 << ((widget.tableView->model()->data(Indice, 0)).toString().toStdString());
    string dia = acumulador2.str();
    stringstream acumulador;
    acumulador << (tiempo->tm_year + 1900);
    string anno = acumulador.str();
    
    string fecha = "Fecha: ";
    fecha.append(dia);
    fecha.append(" de ");
    fecha.append(obtieneMes(tiempo->tm_mon));
    fecha.append(" del ");
    fecha.append(anno);
    widget.label_2->setText(QString(fecha.c_str()));
}

/**
 * Slot que oculta la GUI relacionada a las horas y muestra la de los días
 */
void ADCT_GUI::regresarADias(){
    widget.listWidget->setVisible(false);
    widget.pushButton_3->setVisible(false);
    widget.tableView->setVisible(true);
    widget.pushButton->setVisible(true);
    widget.pushButton_2->setVisible(true);
    widget.pushButton_4->setVisible(true);
    generadorFechaActual(); // Muestra fecha actual en la parte inferior de la ventana
}
 
/**
 * Genera el encabezado de la tabla y lo muestra en pantalla
 */
void ADCT_GUI::distribuidor_calendario(){
    QStandardItem * lunes = new QStandardItem(QString("Lunes"));
    QStandardItem * martes = new QStandardItem(QString("Martes"));
    QStandardItem * miercoles = new QStandardItem(QString("Miercoles"));
    QStandardItem * jueves = new QStandardItem(QString("Jueves"));
    QStandardItem * viernes = new QStandardItem(QString("Viernes"));
    QStandardItem * sabado = new QStandardItem(QString("Sabado"));
    QStandardItem * domingo = new QStandardItem(QString("Domingo"));
    calendario->setItem(0, 1, lunes);
    calendario->setItem(0, 2, martes);
    calendario->setItem(0, 3, miercoles);
    calendario->setItem(0, 4, jueves);
    calendario->setItem(0, 5, viernes);
    calendario->setItem(0, 6, sabado);
    calendario->setItem(0, 0, domingo);
    widget.tableView->setModel(calendario);
    widget.tableView->setRowHeight(0, 15);
    widget.tableView->setColumnWidth(0, 90);
    widget.tableView->setRowHeight(1, 90);
    widget.tableView->setColumnWidth(1, 90);
    widget.tableView->setRowHeight(2, 90);
    widget.tableView->setColumnWidth(2, 90);
    widget.tableView->setRowHeight(3, 90);
    widget.tableView->setColumnWidth(3, 90);
    widget.tableView->setRowHeight(4, 90);
    widget.tableView->setColumnWidth(4, 90);
    widget.tableView->setRowHeight(5, 90);
    widget.tableView->setColumnWidth(5, 90);
    widget.tableView->setRowHeight(6, 90);
    widget.tableView->setColumnWidth(6, 90);
    widget.tableView->setRowHeight(7, 90);
}

/**
 * Genera y muestra en la parte superior de la ventana el mes actual al iniciar la ejecución 
 */
void ADCT_GUI::generadorMesActual(){
    time_t temporizador;
    temporizador = time(NULL);
    tiempo = localtime(&temporizador);
    string mes_anno = "";
    mes_anno.append(obtieneMes(tiempo->tm_mon));
    mes_anno.append(" del ");
    stringstream acumulador;
    acumulador << (tiempo->tm_year + 1900);
    string anno = acumulador.str();
    mes_anno.append(anno);
    widget.label->setText(QString(mes_anno.c_str()));
    
}

/**
 * Genera y muestra en la parte inferior de la ventana la fecha actual al iniciar la ejecución y al regresar a la interfaz de los días
 */
void ADCT_GUI::generadorFechaActual(){
    struct tm tiempo2;
    time_t temporizador;
    temporizador = time(NULL);
    tiempo2 = *localtime(&temporizador);
    stringstream acumulador2;
    acumulador2 << (tiempo2.tm_mday);
    string dia = acumulador2.str();
    stringstream acumulador;
    acumulador << (tiempo2.tm_year + 1900);
    string anno = acumulador.str();
    
    string fecha = "Fecha actual: ";
    fecha.append(dia);
    fecha.append(" de ");
    fecha.append(obtieneMes(tiempo2.tm_mon));
    fecha.append(" del ");
    fecha.append(anno);
    widget.label_2->setText(QString(fecha.c_str()));
}

/**
 * Genera los nombres de los meses segun el número que recibe
 * @param numero_mes
 * @return 
 */
string ADCT_GUI::obtieneMes(int numero_mes){
    if (numero_mes == 0){
        return "Enero";
    }
    else if (numero_mes == 1){
        return "Febrero";
    }
    else if (numero_mes == 2){
        return "Marzo";
    }
    else if (numero_mes == 3){
        return "Abril";
    }
    else if (numero_mes == 4){
        return "Mayo";
    }
    else if (numero_mes == 5){
        return "Junio";
    }
    else if (numero_mes == 6){
        return "Julio";
    }
    else if (numero_mes == 7){
        return "Agosto";
    }
    else if (numero_mes == 8){
        return "Septiembre";
    }
    else if (numero_mes == 9){
        return "Octubre";
    }
    else if (numero_mes == 10){
        return "Noviembre";
    }
    else{
        return "Diciembre";
    }
}

/**
 * Genera y muestra en pantalla un mes especifico
 */
void ADCT_GUI::representacionGraficaMes(){
    struct tm mes_inicio;
    mes_inicio.tm_year = tiempo->tm_year;
    mes_inicio.tm_mon = tiempo->tm_mon;
    mes_inicio.tm_hour = 0;
    mes_inicio.tm_min = 0;
    mes_inicio.tm_sec = 0;
    mes_inicio.tm_mday = 1;
    struct tm mes_fin;
    mes_fin.tm_year = tiempo->tm_year;
    mes_fin.tm_mon = tiempo->tm_mon + 1;
    mes_fin.tm_hour = 0;
    mes_fin.tm_min = 0;
    mes_fin.tm_sec = 0;
    mes_fin.tm_mday = 1;
    time_t temporizador3;
    time_t temporizador4;
    temporizador3 = mktime(&mes_inicio);
    temporizador4 = mktime(&mes_fin);
    double mes = difftime(temporizador4, temporizador3);
    int dias_del_mes = (int)((((mes)/60)/60)/24); // Se obtiene la cantidad de días del mes
    int i = 1;
    int j = 1;
    struct tm pasado = *tiempo;
    while (i < dias_del_mes + 1){ // Apartir del día 1 del mes acomoda los días en la pantalla según el día de la semana
        if (pasado.tm_wday < 6){
            pasado.tm_year = tiempo->tm_year;
            pasado.tm_mon = tiempo->tm_mon;
            pasado.tm_hour = 0;
            pasado.tm_min = 0;
            pasado.tm_sec = 0;
            pasado.tm_mday = i;
            time_t temporizador2;
            temporizador2 = mktime(&pasado);
            pasado = *localtime(&temporizador2);
            stringstream acumulador2;
            acumulador2 << i;
            string fecha5 = acumulador2.str();
            QStandardItem * dia_del_mes = new QStandardItem(QString(fecha5.c_str()));
            calendario->setItem(j, pasado.tm_wday, dia_del_mes);
            i++;    
        }
        else{
            j++;
            pasado.tm_year = tiempo->tm_year;
            pasado.tm_mon = tiempo->tm_mon;
            pasado.tm_hour = 0;
            pasado.tm_min = 0;
            pasado.tm_sec = 0;
            pasado.tm_mday = i;
            if (pasado.tm_wday == 6 && i == 1){
                j = 1;
            }
            time_t temporizador2;
            temporizador2 = mktime(&pasado);
            pasado = *localtime(&temporizador2);
            stringstream acumulador2;
            acumulador2 << i;
            string fecha5 = acumulador2.str();
            QStandardItem * dia_del_mes = new QStandardItem(QString(fecha5.c_str()));
            calendario->setItem(j, pasado.tm_wday, dia_del_mes); // Inserción en la tabla
            i++;  
        }
    }
}

/**
 * Este método hace visible la interfaz gráfica del usuario destinada a crear nuevos eventos.
 */
void ADCT_GUI::nuevoEvento(){ 
    widget.tableView->setVisible(false);
    widget.pushButton->setVisible(false);
    widget.pushButton_2->setVisible(false);
    widget.listWidget->setVisible(false); 
    widget.pushButton_3->setVisible(false);
    widget.pushButton_4->setVisible(false);
    widget.frame->setVisible(true);
}

/**
 * Este método hace visible la interfaz gráfica del usuario destinada a mostrar los eventos ya creados.
 */
void ADCT_GUI::backToEventos(){
    widget.tableView->setVisible(true);
    widget.pushButton->setVisible(true);
    widget.pushButton_2->setVisible(true);
    widget.listWidget->setVisible(false); 
    widget.pushButton_3->setVisible(false);
    widget.pushButton_4->setVisible(true);
    widget.frame->setVisible(false);
}
