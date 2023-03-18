
#include<iostream>
using namespace std;

class Planeta{
    private:
        string nombre;
        int posicion;
        string color;
    public:
        Planeta(string _nombre,int _posicion,string _color); // Prototipo
        void mostrarPlaneta(); // Prototipo
};

// Definción del constructor.
// Implementando el código del constructor
// El constructor es un método que sirve para crear objetos de una clase.
Planeta::Planeta(string _nombre,int _posicion,string _color){
    this->nombre = _nombre;
    this->posicion = _posicion;
    this->color = _color;
}

// Definción de método mostrarPlaneta.
void Planeta::mostrarPlaneta(){
    cout<<"\n\n\t +---- PLANETA ----+";
    cout<<"\n\t | Nombre: "<<this->nombre;
    cout<<"\n\t | Posicion: "<<this->posicion;
    cout<<"\n\t | Color: "<<this->color;
    cout<<"\n\t +------------------+";
}


int main(){

    // Instanciando un objeto de la clase Planeta.
    Planeta planeta1("Mercurio",1,"Gris");
    Planeta planeta2("Venus",2,"Anaranjado");
    Planeta planeta3("Tierra",3,"Azul");
    Planeta planeta4("Marte",4,"Rojo");
    Planeta planeta5("Jupiter",5,"Gris fuerte");
    Planeta planeta6("Saturno",6,"Azul rey");
    
    planeta1.mostrarPlaneta();
    planeta2.mostrarPlaneta();
    planeta3.mostrarPlaneta();
    planeta4.mostrarPlaneta();
    planeta5.mostrarPlaneta();
    planeta6.mostrarPlaneta();

    cout<<"\n\n";
    return 0;
}