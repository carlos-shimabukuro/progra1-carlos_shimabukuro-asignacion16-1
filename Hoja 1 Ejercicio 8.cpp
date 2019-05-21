#include <iostream>

using namespace std;

void esBisiesto(int *nN) {
	int n = *nN;
	if ((n % 4 == 0) && (n % 100 != 0) && (n % 400 != 0))
	{
		cout << "Si es Bisiesto" << endl;
	}
	else
	{
		cout << "No es Bisiesto" << endl;
	}

}

int main() {
	int anio;
	int *bis;


	cout << "Ingrese anio : "; cin >> anio;

	bis = &anio;

	esBisiesto(bis);

	cout << endl; system("pause"); return (0);
}