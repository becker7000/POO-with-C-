
class Persona{
    protected:
         string nombre;
	 string telefono;
    public:
	 Persona(string _nombre,string _telefono); // Constructor.
	 virtual void mostrar(); // Método polimórfico.
};

// Definición del constructor.
Persona::Persona(string _nombre, string _telefono){
    this->nombre=_nombre;
    this->telefono=_telefono;
}

// Definición del método polimórfico.
void Persona::mostrar(){
    cout<<"\n\t | Nombre: "<<nombre;
    cout<<"\n\t | Teléfono: "<<telefono;
}

// ----- Clases hijas ------------- //

class Conductor : public Persona{
    private:
        string matricula;
    public:
        Conductor(string _nombre, string _telefono, string _matricula);
        void mostrar(); // Este es el prototipo del método polimorfico que será sobreescrito para Pasajero.	
};

// Definición del constructor de la clase hija Conductor
Conductor::Conductor(string _nombre, string _telefono, string _matricula) : Persona(_nombre,_telefono){
    this->matricula=_matricula;	
}

// Sobreescribiendo el método mostrar para Conductor.
void Conductor::mostrar(){
    cout<<"\n\n\t + --- <<CONDUCTOR>>";
    Persona::mostrar();
    cout<<"\n\t | Matricula: "<<matricula;
    cout<<"\n\t +------------------------+";
}

class Pasajero : public Persona{
    private:
        string email;
    public:
	Pasajero(string _nombre, string _telefono, string _email);
        void mostrar(); // Este es el prototipo del método polimorfico que será sobreescrito para Pasajero.	
};

// Definición del constructor de la clase hija Pasajero
Pasajero::Pasajero(string _nombre, string _telefono, string _email): Persona(_nombre,_telefono){
    this->email=_email;
}

// Sobreescribiendo el método mostrar para Pasajero.
void Pasajero::mostrar(){
    cout<<"\n\n\t + --- <<PASAJERO>>";
    Persona::mostrar();
    cout<<"\n\t | Email: "<<email;
    cout<<"\n\t +------------------------+";
}








