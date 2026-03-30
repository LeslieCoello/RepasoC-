#include <iostream>
using namespace std;

int buscar(int datos[], int n, int valor){
    for (int i = 0; i < n; i++){
        if (datos[i] == valor){
            return i;
        }
    }
    return -1;
}

int main(){

    int datos[3] = {12, 18, 25};
    int valor = 18;

    int posicion = buscar(datos, 3, valor);

    if(posicion != -1)
        cout << "Valor encontrado en la posicion: " << posicion << endl;
    else
        cout << "Valor no encontrado";

    return 0;
}
