#include<iostream>

using namespace std;

int main(){

    float peso,estatura,imc;
    string mensaje; // string es el tipo cadena.

    cout<<"\n\t Dame tu peso (kg): ";
    cin>>peso;

    cout<<"\n\t Dame tu estatura (m): ";
    cin>>estatura;

    imc = peso / (estatura*estatura);
    cout<<"\n\t Tu indice de masa corporal es: "<<imc;

    if(imc<16.0){
        mensaje="Delgadez severa";
    }else if(imc<17){
        mensaje="Delgadez moderada";
    }else if(imc<18.5){
        mensaje="Delgadez leve";
    }else if(imc<25){
        mensaje="Peso normal";
    }else if(imc<30){
        mensaje="Preobesidad";
    }else if(imc<35){
        mensaje="Obesidad leve";
    }else if(imc<40){
        mensaje="Obesidad media";
    }else{
        mensaje="Obesidad morbida";
    }

    cout<<"\n\t Tu diagnostico es: "<<mensaje;

    cout<<"\n\n";
    return 0;
}