#include <iostream>
using namespace std; 
int main () {
	int notas[5]={8,9,7,10,6};
	float promedio;
    float suma = 0;
	for (int i=0; i < 5; i++){
		cout << "nota" << i+1 << ":" << notas [i] << endl; // endl para salto de linea 	
		suma = suma + notas[i];
	}
	promedio = suma / 5;
    cout << "Promedio: " << promedio << endl;
	return 0;
}
