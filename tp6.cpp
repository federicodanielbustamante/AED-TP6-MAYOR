/*
	TP 4 - Calcular perimetro de un rectangulo.
	Federico Daniel Bustamante
	24/05/2015
*/
#include <iostream>
int elMayor(int, int, int);
int primero;
int segundo;
int tercero;
int numeroMayor;

using namespace std;

int main() {

	cout << "Ingresar el primer numero: ";
	cin >> primero;

	cout << "Ingresar el segundo numero: ";
	cin >> segundo;

	cout << "Ingresar el tercer numero: ";
	cin >> tercero;

	cout << "El mayor es: ";
	cout << elMayor(primero, segundo, tercero);
	cout << "\n";
}

int elMayor(int primero, int segundo, int tercero){

	numeroMayor = tercero;
	
	if (primero > segundo and primero > tercero) {
		numeroMayor = primero;
	} else if (segundo > primero and segundo > tercero) {
		numeroMayor = segundo;
	}
	
	return numeroMayor;
}