#include<iostream>
#include<cmath>
#include<time.h>

using namespace std;

int main(){

    int tam;

    cout<<"\n\t Escribe un numero n: ";
    cin>>tam;

    // Vamos modificando la semilla del número aleatorio 
    // en función del tiempo.
    srand(time(NULL));

    for(int i=0;i<tam;i++){
        cout<<"\n\n"; // Salto de línea de cada de fila de la matriz
        for(int j=0;j<tam;j++){
            cout<<"\t "<<rand()%100;
        }
    }

    cout<<"\n\n";
    return 0;
}