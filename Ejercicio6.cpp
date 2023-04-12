/*Leer las notas de una clase de informática y deducir
todas aquellas que son NOTABLES (>= 7 y < 9)*/

#include <iostream>
using namespace std;

void notables();

void notables(){
    int nota, cantEst, totalNotables=0;
    cout << "Dime el numero de estudiantes a calificar en la asignatura de Informatica: ";
    cin >> cantEst;

    for(int i = 1; i <= cantEst; i++){
        cout << "Ingrese la nota del estudiante " << i << ": " << endl;
        cin >> nota;
        if(nota >= 7 && nota < 9){
            cout << "Es notable" << endl;
            totalNotables += 1;
        } 
        else{
            cout << "No es notable" << endl;
        }
    }
    cout << "El numero total de estudiantes con calificaciones notables de la clase es: " << totalNotables;
}