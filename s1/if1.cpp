#include<iostream>

using namespace std;

int main(){

    int edad;

    cout<<"\n\t Dame tu edad: ";
    cin>>edad;

    if(edad<18){
        cout<<"\n\t Eres menor de edad...";
    }else if(edad<60){
        cout<<"\n\t Eres mayor de edad...";
    }else{
        cout<<"\n\t Eres de la tercera edad";
    }

    cout<<"\n\n";
    return 0;
}

/*
    Nota: Las estructuras de control nos ayuda a que un programa
    tome decisiones o repita un bloque de código determinadas veces.

    Existen 2 tipos de estructuras de control:

    1. Selectivas: if,switch,ternario.
    2. Repetitivas: while, for, do-while.

*/