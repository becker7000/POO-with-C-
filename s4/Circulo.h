#define PI 3.1415926535

class Circulo{

    private:
    	float radio; // Atributo

    public:

	// Constructores:
	Circulo(float _radio); // Primer constructor.	
	Circulo(); // Segundo constructor.		       
        Circulo(const Circulo &circulo); // Tercer constructor.
	
	// Getters y setters:	
	float getRadio(); //Getter del radio.
        void setRadio(float _radio); // Setter del radio.
       
	// Métodos personalizados.   
	void mostrarArea();    
	void mostrarPerimetro();
	void mostrarCirculo();

};

// Definción del primer constructor.
Circulo::Circulo(float _radio){
    this->radio=_radio;
}

// Definción del segundo constructor.
Circulo::Circulo(){
    this->radio=1.0;
}

// Definición del tercer constructor.
Circulo::Circulo(const Circulo &circulo){
    this->radio=circulo.radio;
}

// Definción del getter de radio.
float Circulo::getRadio(){
    return this->radio;
}

// Definción del setter de radio.
void Circulo::setRadio(float _radio){
    this->radio=_radio;	
}

// Definición del método mostrarArea
void Circulo::mostrarArea(){
    float area;
    area=PI*this->radio*this->radio;
    cout<<"\n\t El área del círculo es: "<<area;    
}

// Definción del método mostrarPerimetro
void Circulo::mostrarPerimetro(){
    float perimetro;
    perimetro=PI*2*this->radio;
    cout<<"\n\t El perímetro del círculo es: "<<perimetro;
}


// Definción de el método mostrarCirculo
void Circulo::mostrarCirculo(){
    cout<<"\n\t El radio es: "<<this->getRadio();
}









