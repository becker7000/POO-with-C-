
#include<iostream>
using namespace std;

#include "Persona.h"
#include "Ruta.h"

int main(){

    // Creando un objeto de la clase Conductor:
    Conductor pepe("Pepe","5512345678","qwe123");

    // Creando un objeto de la clase Pasajero:
    Pasajero alan("Alan","5601928387","alan17@gmail.com");

    // Aplicando el método polimorfico a ambos objetos.
    pepe.mostrar();
    alan.mostrar();

    // Creando una ruta:
    Ruta rutaA("Roma norte","Lindavista");
    rutaA.mostrarRuta();

    cout<<endl<<endl;
    return 0;
}
