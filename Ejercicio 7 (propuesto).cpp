#include <iostream> 
using namespace std; 


// Clase base o clase padre
class Vehiculo {
public:
	string marca;   // Variable para guardar la marca del vehículo
	string modelo;  // Variable para guardar el modelo del vehículo
	
	// Método virtual que muestra la información del vehículo
	virtual void mostrarInfo (){
		cout << "marca: " << marca <<endl;   // Muestra la marca
		cout << "modelo: "<< modelo <<endl;  // Muestra el modelo
	}
};


// Clase Auto que hereda de la clase Vehiculo
class Auto : public Vehiculo {
public:
	int numPuertas; // Variable para guardar el número de puertas
	
	// Método que sobrescribe el método de la clase padre
	void mostrarInfo () override {
		cout << "Informacion Auto" << endl;
		Vehiculo::mostrarInfo(); // Llama al método de la clase base
		cout << "Número de puertas: " <<numPuertas<< endl; // Muestra las puertas	
	}
};


// Clase Moto que también hereda de Vehiculo
class Moto : public Vehiculo {
public:
	int cilindraje; // Variable para guardar el cilindraje
	
	// Sobrescritura del método mostrarInfo
	void mostrarInfo () override {
		cout << "" << endl;
		cout << " Informacion Moto" << endl;
		Vehiculo::mostrarInfo(); // Llama al método de la clase padre
		cout << "Cilindraje: " <<cilindraje<<endl; // Muestra el cilindraje
	}
};


// Función principal donde inicia el programa
int main (){
	
	Auto a; // Creación de un objeto de la clase Auto
	Moto m; // Creación de un objeto de la clase Moto
	
	// Asignación de valores al objeto Auto
	a.marca = "Toyota";
	a.modelo = "Camioneta";
	a.numPuertas = 4;
	a.mostrarInfo(); // Llama al método para mostrar la información

	// Asignación de valores al objeto Moto
	m.marca = "honda";
	m.modelo = "Clasico";
	m.cilindraje = 300;
	m.mostrarInfo(); // Muestra la información de la moto
	
	return 0; // Fin del programa
}
