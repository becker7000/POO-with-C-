#include<iostream>

using namespace std;

int main(){

    cout<<"\n\t +-------------------+";
    cout<<"\n\t | 1. Opcion uno     |";
    cout<<"\n\t | 2. Opcion dos     |";
    cout<<"\n\t | 3. Opcion tres    |";
    cout<<"\n\t | 4. Opcion cuatro  |";
    cout<<"\n\t | 5. Opcion cinco   |";
    cout<<"\n\t +-------------------+";

    int opcion;
    cout<<"\n\t Opcion: ";
    cin>>opcion;

    switch(opcion){
        case 1:
            cout<<"\n\t Seleccionaste la opcion 1";
            break;
        case 2:
            cout<<"\n\t Seleccionaste la opcion 2";
            break;
        case 3:
            cout<<"\n\t Seleccionaste la opcion 3";
            break;
        case 4:
            cout<<"\n\t Seleccionaste la opcion 4";
            break;
        case 5:
            cout<<"\n\t Seleccionaste la opcion 5";
            break;      
        default:
            cout<<"\n\t Seleccionaste una opcion no valida";
            break;              
    }

    cout<<"\n\n";
    return 0;
}