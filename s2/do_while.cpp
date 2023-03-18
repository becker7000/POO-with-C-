#include<iostream>
using namespace std;

int main(){

    // Filtro para numeros entre 1 y 5.

    cout<<"\n\t Filtrando un numero"<<endl;
    int opcion;

    do{ // se repite en caso de que el usario escriba un numero no valido
        cout<<"\n\t +-------------+";
        cout<<"\n\t | 1. opcion a";
        cout<<"\n\t | 2. opcion b";
        cout<<"\n\t | 3. opcion c";
        cout<<"\n\t | 4. opcion d";
        cout<<"\n\t | 5. opcion e";
        cout<<"\n\t +-------------+";
        cout<<"\n\t Escribe un numero entre 1 y 5: ";
        cin>>opcion;
    }while(opcion<1 || opcion>5);
    /*
        do-while ejecuta al menos una vez el bloque de código que contiene
        y después evalua la condición para decidir si se vuelve a ejecutar el
        bloque o no.
    */

    cout<<"\n\t Opcion valida";


    cout<<"\n\n";
    return 0;
}