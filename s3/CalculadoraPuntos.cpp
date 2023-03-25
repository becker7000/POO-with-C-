#include<iostream>
#include<unistd.h>
#include<cmath>
using namespace std;

#include "Punto.h"

int main(){

    float x,y;
    cout<<"\n\t Bienvenido a la calculadora de Puntos.";

    cout<<"\n\t Escribe las coordenadas del punto 1.";
    cout<<"\n\t x: "; cin>>x;
    cout<<"\n\t y: "; cin>>y;
    
    // Creando un punto con las coordenadas dadas:
    Punto p1(x,y);    

    cout<<"\n\t Escribe las coordenadas del punto 2.";
    cout<<"\n\t x: "; cin>>x;
    cout<<"\n\t y: "; cin>>y;
  
    // Creando un segundo punto con otras coordenadas dadas. 
    Punto p2(x,y);

    cout<<"\n\t Generando análisis...";

    sleep(5);
    system("clear"); // En windows usar: system("cls");

    // Aplicamos los métodos creados:
    cout<<"\n\t Análisis de los puntos dados.";
    p1.mostrarPunto();
    p2.mostrarPunto();
    p1.distancia(p2);

    cout<<"\n\n";
    return 0;
}
