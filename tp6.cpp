/*
	TP 6 - Calcular el mayor.
	Federico Daniel Bustamante
	24/05/2015
*/
#include <iostream>
int elMayor(int, int, int);
int primero;
int segundo;
int tercero;

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
	
	if (primero > segundo and primero > tercero) {
		return primero;
	} else if (segundo > primero and segundo > tercero) {
		return segundo;
	}

	return tercero;
}