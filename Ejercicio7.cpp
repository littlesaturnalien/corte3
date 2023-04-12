/*Leer 100 números. Determinar la media de los números positivos
y la media de los números negativos */

#include <iostream>
using namespace std;

void mediaCienNum();

void mediaCienNum(){
    int num, positivo=0, negativo=0, sumaPos=0, sumaNeg=0;
    cout << "Introduzca 100 numeros enteros: " << endl;
    for(int i = 1; i <= 100; i++){
        cout << "Dime el numero " << i << endl;
        cin >> num;
        if(num > 0){
            sumaPos += num;
            positivo += 1;
        }
        else if(num < 0){
            sumaNeg += num;
            negativo += 1;
        }
    }
    float mediaPos = sumaPos / positivo;
    float mediaNeg = sumaNeg / negativo;
    cout << "La media de los numeros positivos es: " << mediaPos << endl;
    cout << "La media de los numeros negativos es: " << mediaNeg << endl;
}
