#include<iostream>
using namespace std;

#include "Circulo.h"

int main(){
	
    // Creando un objeto de la clase Circulo:
    Circulo circulo1(4.5);

    // Mostrando el círculo con el método mostrarCirculo
    circulo1.mostrarCirculo();

    // Usando el getter de radio. (Los getters nos devuelve el valor de un atributo)
    cout<<"\n\t (Getter) Radio del círculo actual: "<<circulo1.getRadio();

    // Modificando el radio del círculo con el setter.
    cout<<"\n\t (Setter) Modificando el radio...";
    circulo1.setRadio(7.9);

    // Volvemos a mostrar el círculo.
    circulo1.mostrarCirculo();

    cout<<endl<<endl;
    return 0;
}
