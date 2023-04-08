
#include "Persona.h"
#include "Ruta.h"

class Viaje{
    private:
        Ruta* ruta;
        Conductor* conductor; 
        Pasajero* pasajeros[3]; // Arreglo de pasajeros.
	float costo;
    public:
	Viaje(string _origen,string _destino, float _costo);
        void agregarConductor(Conductor* _conductor);
        void agregarPasajeros(Pasajero* pass1, Pasajero* pass2, Pasajero* pass3);
	float costo;
};
