/* Dado el nombre de un mes y si el año es o no bisiesto,
deducir el número de días del mes */

#include <iostream>
#include <string>
using namespace std;

void numDias();
bool bisiesto(int anio);

void numDias(){
    string mes;
    int anio, dias;

    cout << "Dime el nombre del mes (procura escribir la primera letra en mayuscula y el resto en minuscula): ";
    cin >> mes;

    cout << "Ingrese el anio: ";
    cin >> anio;

    if(mes == "Enero" || mes == "Marzo" || mes == "Mayo" || mes == "Julio" || mes == "Agosto" || mes == "Octubre" || mes == "Diciembre"){
        dias = 31;
        cout << "El mes de " << mes << " tiene " << dias << " dias.";
    }
    else if(mes == "Abril" || mes == "Junio" || mes == "Septiembre" || mes == "Noviembre"){
        dias = 30;
        cout << "El mes de " << mes << " tiene " << dias << " dias.";
    }
    else if(mes == "Febrero"){
        if(bisiesto(anio)){
            cout << "El mes de Febrero tiene 29 dias.";
    }
        else{
            cout << "El mes de Febrero tiene 28 dias.";
            }
    }
    else{
        cout << "El mes que has introducido es inexistente. Revisa si lo escribiste según las instrucciones solicitadas.";
    }
}

bool bisiesto(int anio){
    bool resultado = false;
    for (int i = 0; i < 1; i++){
        if((anio%4==0 && anio%100!=0)||anio%400==0){
            resultado = true;
        }
    }
    return resultado;
}