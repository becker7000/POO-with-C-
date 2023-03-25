#include<iostream> //Archivo de cabecera.
#include<cmath> //Archivo de cabecera
using namespace std;

#include "Punto.h" // Mandamos a llamar el archivo donde la clase Punto.

int main(){

    Punto p1(2,4);
    Punto p2(5,10);

    p1.mostrarPunto();
    p2.mostrarPunto();

    p1.setX(3); // No se muestra nada
    p2.setY(12);

    p1.mostrarPunto();
    p2.mostrarPunto();

    // Creando un punto con el 2do constructor:
    Punto p3;
    cout<<"\n\t Este punto fué creado sin parámetros: ";
    p3.mostrarPunto();

    // Usando el método distancia.
    p3.distancia(p1);

    cout<<"\n\n";
    return 0;
}
