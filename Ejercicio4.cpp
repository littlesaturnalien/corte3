/* Imprimir todos los números primos entre 2 y 1.000 inclusive */

#include <iostream>
using namespace std;

void imprimirNumPrimos();
bool primo(int num);

void imprimirNumPrimos(){
    int num, divisor;
    cout << "Introduce hasta que numero buscar (entre 2 y 1000): " << endl;
    cin >> num;
    
    if(num>=2 && num<=1000){
        for(int i=2; i<=num; i++){
           divisor=2;                   
            while(i % divisor != 0)  
                  divisor++;
    
            if(divisor==i)                
               cout << i << " ";
        }
    } else{
        cout << "Ingreso un numero fuera del rango.";
    }                    
    
}