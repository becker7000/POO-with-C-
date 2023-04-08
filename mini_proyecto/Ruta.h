
class Ruta{
    private:
        string origen;
        string destino;
    public:
        Ruta(string _origen,string _destino); // Constructor de la clase Ruta
	void setOrigen(string _origen);
        void setDestino(string _destino);
	void mostrarRuta();	
};

// Definición del constructor de Ruta
Ruta::Ruta(string _origen, string _destino){
    this->origen=_origen;
    this->destino=_destino;
}

// Definición de los setters

void Ruta::setOrigen(string _origen){
    this->origen=_origen;
}

void Ruta::setDestino(string _destino){
    this->destino=_destino;
}

void Ruta::mostrarRuta(){
    cout<<"\n\n\t + --- <<RUTA>> ";
    cout<<"\n\t | Origen: "<<origen;
    cout<<"\n\t | Destino: "<<destino;
    cout<<"\n\t +----------------------+";   
}





