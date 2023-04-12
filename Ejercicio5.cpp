/* Se desea leer las calificaciones de una clase de informática
y contar el número total de aprobados (5 o mayor que 5)*/

#include <iostream>
using namespace std;

void aprobados();
bool estaAprobado(int nota);

void aprobados(){
    int totalAprobados=0, nota, cantEst;
    cout << "Dime el numero de estudiantes a calificar en la asignatura de Informatica: ";
    cin >> cantEst;

    for(int i = 1; i <= cantEst; i++){
        cout << "Ingrese la nota del estudiante " << i << ": " << endl;
        cin >> nota;
        if(estaAprobado(nota)){
            totalAprobados += 1;
        }
    }
    cout << "El numero total de estudiantes aprobados de la clase es: " << totalAprobados;
}

bool estaAprobado(int nota){
    return nota >= 5;
}