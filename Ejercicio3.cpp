/* Determinar la media de una lista de números positivos
terminada con un número no positivo después del último 
número válido */

#include <iostream>
using namespace std;

void determinarMedia();

void determinarMedia(){
    int num=0, cant=0;
    float suma=0; 
    cout << "Ingrese una lista de numeros positivos y terminala con uno no positivo: " << endl;
    for(int i = 0; num >= 0; i++){
        cout << "Dime un #: ";
        cin >> num;
        suma += num;
        cant++;
        if (num<0){
            break;
        }
    }
    float media = suma / cant;
    cout << "La media es: " << media << endl;
}