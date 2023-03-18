#include<iostream>
#include<time.h>
using namespace std;

int main(){

    cout<<"\n\t Estoy pensando en un numero del 1 al 100";
    cout<<"\n\t Adivina cual es";

    int respuesta=-1,intentos=0,numero;
    bool fueAdivinado=false; // Es falso que se ha adivinado el numero.

    srand(time(NULL));
    numero=rand()%100+1; // Generamos un número aleatorio del 1 al 100. 

    while(!fueAdivinado){

        intentos++; //Incrementamos los intentos.
        cout<<"\n\t Escribe el numero: ";
        fflush(stdin); // Limpiamos el buffer de entrar.
        cin>>respuesta;

        if(respuesta==numero){
            cout<<"\n\t Felicidades, has adivinado el numero.";
            cout<<"\n\t Te llevo "<<intentos<<" intentos adivinar.";
            fueAdivinado=true; // Esto ayuda a que termine el ciclo.
        }

        if(respuesta<numero){ // 75 -> u(50)<n(75)
            cout<<"\n\t El numero es mayor";
        }

        if(respuesta>numero){
            cout<<"\n\t El numero es menor";
        }

    }
    // While es un ciclo indeterminado, se usa cuando hay que repetir 
    // un bloque y no sabemos cuantas veces debemos repetirlo pero 
    // sí conocemos la condición bajo la cual se va a dejar de repetir.

    cout<<"\n\t Gracias por jugar.";

    cout<<"\n\n";
    return 0;
}