#include<iostream>
using namespace std;

class Producto{

    private:
        int id;
        string nombre;
        float precio;
        string descripcion;

    public:
        Producto(int _id, string _nombre, float _precio, string _descripcion);
        int getId();
        string getNombre();
        float getPrecio();
        string getDescripcion();   
        void setId(int _id);
        void setNombre(string _nombre);
        void setPrecio(float _precio);
        void setDescripcion(string _descripcion);
        void mostrarProducto();

};

// Defición de los métodos:
Producto::Producto(int _id, string _nombre, float _precio, string _descripcion){
    this->id=_id;
    this->nombre=_nombre;
    this->precio=_precio;
    this->descripcion=_descripcion;
}

// Getters:
int Producto::getId(){
    int __id=this->id; // Generamos una copia y la entregamos.
    return __id; // Esto sería un riesgo para la seguridad del sistema.
}

string Producto::getNombre(){
    string __nombre=this->nombre;
    return __nombre;
}

float Producto::getPrecio(){
    float __precio=this->precio;
    return __precio;
}

string Producto::getDescripcion(){
    string __descripcion=this->descripcion;
    return __descripcion;
}

// Setters:
void Producto::setId(int _id){
    this->id=_id;
}

void Producto::setNombre(string _nombre){
    this->nombre=_nombre;
}

void Producto::setPrecio(float _precio){
    this->precio=_precio;
}

void Producto::setDescripcion(string _descripcion){
    this->descripcion=_descripcion;
}

// Definición del método que muestra el producto:
void Producto::mostrarProducto(){
    cout<<"\n\t +---------------------------+";
    cout<<"\n\t | Nombre: "<<this->getNombre();
    cout<<"\n\t | Precio: "<<this->getPrecio();
    cout<<"\n\t | Descripción: "<<this->getDescripcion();
    cout<<"\n\t +---------------------------+";
}

int main(){

    // Crear instancias(objeto) de la clase Producto.
    Producto p1(1,"Sabritas",25.49,"Papas saladas");
    Producto p2(2,"Emperador",18.99,"Galletas de chocolate");
    Producto p3(3,"Coca cola",29.37,"Refresco");

    p1.mostrarProducto();
    p2.mostrarProducto();
    p3.mostrarProducto();

    // Usando los modificadores de productos ya existentes.
    p1.setNombre("Chips");
    p2.setDescripcion("Galletas");
    p3.setPrecio(32.17);

    p1.mostrarProducto();
    p2.mostrarProducto();
    p3.mostrarProducto();

    cout<<"\n\n";
    return 0;

}