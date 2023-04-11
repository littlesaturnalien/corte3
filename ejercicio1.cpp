/* Determinar la media de una lista
indefinida de numeros positivos, 
terminados con un numero negativo */

#include <iostream>
using namespace std;

void calcMedia();
bool evaluarNum(int num);

void calcMedia(){
    int num=0, suma=0, cant=0;

    for(int i=0; num>=0; i++){
        cout << "Dime un #: ";
        cin >> num;
        if(evaluarNum(num)){
            suma += num;
            cant ++;
        }
    }
    float media = suma / cant;
    cout << "La media es: " << media << endl;
}

bool evaluarNum(int num){
    return num > 0;
}