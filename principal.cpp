#include <iostream>
#include <string>
#include "ejercicio1.cpp"
#include "ejercicio2.cpp"
#include "ejercicio3.cpp"
#include "ejercicio4.cpp"
#include "ejercicio5.cpp"
#include "ejercicio6.cpp"
#include "ejercicio7.cpp"
using namespace std;

int main(){
    int ejercicio;
    cout << "Ingrese un numero del 1 al 7 para seleccionar el ejercicio del libro correspondiente: " << endl;
    cout << " " << endl;
    cout << "1. Ejercicio 5.1" << endl;
    cout << "2. Ejercicio 5.2" << endl;
    cout << "3. Ejercicio 5.4" << endl;
    cout << "4. Ejercicio 5.5" << endl;
    cout << "5. Ejercicio 5.6" << endl;
    cout << "6. Ejercicio 5.7" << endl;
    cout << "7. Ejercicio 5.8" << endl;
    cout << " " << endl;
    cin >> ejercicio;

    system("cls");
    switch (ejercicio)
    {
    case 1:
        calcMedia();
        break;
    
    case 2:
        numDias();
        break;
    
    case 3:
        determinarMedia();
        break;

    case 4:
        imprimirNumPrimos();
        break;

    case 5:
        aprobados();
        break;

    case 6:
        notables();
        break;

    case 7:
        mediaCienNum();
        break;
    
    default: cout << "No ingreso un numero valido" << endl;
        break;
    }
    return 0;
}