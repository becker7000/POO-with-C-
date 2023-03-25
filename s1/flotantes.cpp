#include<iostream>

using namespace std;

int main(){

    float distancia_mi;
    float distancia_km;

    cout<<"\n\t Dame una distancia en millas: ";
    cin>>distancia_mi;

    distancia_km = distancia_mi*1.609;

    cout<<"\n\t "<<distancia_mi<<" millas son equivalentes a "<<distancia_km<<" kilometros";

    cout<<"\n\n";
    return 0;
}