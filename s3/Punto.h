
class Punto{
  
    private:
        float x;
	float y;

    public:
	Punto(float _x,float _y); // Prototipo del constructor 1.
	Punto(); // Constructor 2.
	float getX();
	float getY();
	void setX(float _x);
	void setY(float _y);
	void distancia(Punto _punto); // Recibiendo un objeto la clase Punto.
	void mostrarPunto();

};

// Definición del constructor:
Punto::Punto(float _x, float _y){
    this->x=_x;
    this->y=_y;
}

// Sobrecargando el constructor:
Punto::Punto(){
    this->x=0;
    this->y=0;
}

// Getters:

float Punto::getX(){
    return this->x;	
}

float Punto::getY(){
    return this->y;
}

// Setters:

void Punto::setX(float _x){
    this->x=_x;
}

void Punto::setY(float _y){
    this->y=_y;
}

// Definción del método distancia:
void Punto::distancia(Punto _punto){
    float distancia; // Variable local.
    distancia=sqrt(pow((this->getX()-_punto.getX()),2) + pow((this->getY()-_punto.getY()),2) ); // sqrt pertenece a cmath    
    cout<<"\n\t La distancia entre los puntos es: "<<distancia;
}

void Punto::mostrarPunto(){
    cout<<"\n\t P ( "<<this->getX()<<" , "<<this->getY()<<" ) ";	
}

