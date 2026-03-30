#include <iostream>
#include <vector>
using namespace std;

class ListaAsistentes {
private:
    vector<string> asistentes;

public:

    // insertar asistente
    void insertar(string nombre) {
        asistentes.push_back(nombre);
    }

    // mostrar asistentes
    void mostrar() {
        cout << "\nLista de asistentes:\n";
        for (int i = 0; i < asistentes.size(); i++) {
            cout << i + 1 << ". " << asistentes[i] << endl;
        }
    }

    // buscar asistente
    void buscar() {
        string nombre;
        cout << "Ingrese el nombre del asistente a buscar: ";
        cin >> nombre;

        for (int i = 0; i < asistentes.size(); i++) {
            if (asistentes[i] == nombre) {
                cout << "Asistente encontrado en la posicion " << i + 1 << endl;
                return;
            }
        }

        cout << "Asistente no encontrado\n";
    }

    // eliminar asistente
    void eliminar() {
        mostrar();

        int opcion;
        cout << "Ingrese el numero del asistente que desea eliminar: ";
        cin >> opcion;

        if (opcion > 0 && opcion <= asistentes.size()) {
            asistentes.erase(asistentes.begin() + (opcion - 1));
            cout << "Asistente eliminado correctamente\n";
        } else {
            cout << "Numero invalido\n";
        }
    }

    // tamaño de la lista
    void size() {
        cout << "Total de asistentes: " << asistentes.size() << endl;
    }
};

int main() {

    ListaAsistentes evento;

    // agregar algunos asistentes
    evento.insertar("Ana");
    evento.insertar("Luis");
    evento.insertar("Carlos");
    evento.insertar("Maria");

    evento.mostrar();
    evento.size();

    // buscar asistente
    evento.buscar();

    // eliminar asistente
    evento.eliminar();

    evento.mostrar();
    evento.size();

    return 0;
}
