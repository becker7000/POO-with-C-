#include<iostream>
using namespace std;

#include "Circulo.h"

int main(){

    // Creando un círculo con el primer constructor:
    Circulo circuloA(5.4);
    circuloA.mostrarCirculo();

    // Creando otro círculo pero con el segundo constructor:
    Circulo circuloB;
    circuloB.mostrarCirculo();

    // Generando un copia del primer circulo usando el tercer constructor:
    Circulo copiaCirculoA(circuloA);
    copiaCirculoA.mostrarCirculo();

    // Aplicando el método mostrarArea
    circuloA.mostrarArea();
    circuloB.mostrarArea();

    // Aplicando el método mostrarPerimetro
    circuloA.mostrarPerimetro();
    circuloB.mostrarPerimetro();

    cout<<endl<<endl;
    return 0;
}
