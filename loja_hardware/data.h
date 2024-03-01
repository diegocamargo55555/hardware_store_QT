#ifndef DATA_H
#define DATA_H
#include <iostream>
#include <QDialog>

using namespace std;
struct lista_processadores
{
    int price;
    QString name;

};

void processador_nome(){
    lista_processadores processores[3];
    processores[0].price = 55;
    processores[1].price = 69;
    processores[2].price = 88;

    processores[0].name = "ryzen 5";

}







#endif // DATA_H

