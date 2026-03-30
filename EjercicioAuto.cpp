#include <iostream>
using namespace std;

class Vehiculo {
public:
    string fabricante;
    string color;

    virtual void mostrarDatos(){
        cout << "Fabricante: " << fabricante << endl;
        cout << "Color: " << color << endl;
    }
};

class Auto : public Vehiculo {
public:
    int puertas;

    void mostrarDatos() override {
        cout << "Informacion del Auto" << endl;
        Vehiculo::mostrarDatos();
        cout << "Puertas: " << puertas << endl;
    }
};

class Moto : public Vehiculo {
public:
    int motor;

    void mostrarDatos() override {
        cout << endl;
        cout << "Informacion de la Moto" << endl;
        Vehiculo::mostrarDatos();
        cout << "Motor: " << motor << " cc" << endl;
    }
};

class Camion : public Vehiculo {
public:
    int carga;

    void mostrarDatos() override {
        cout << endl;
        cout << "Informacion del Camion" << endl;
        Vehiculo::mostrarDatos();
        cout << "Capacidad de carga: " << carga << " toneladas" << endl;
    }
};

int main(){

    Auto a;
    Moto m;
    Camion c;

    a.fabricante = "Chevrolet";
    a.color = "Rojo";
    a.puertas = 4;
    a.mostrarDatos();

    m.fabricante = "Yamaha";
    m.color = "Negro";
    m.motor = 250;
    m.mostrarDatos();

    c.fabricante = "Volvo";
    c.color = "Blanco";
    c.carga = 10;
    c.mostrarDatos();

    return 0;
}
