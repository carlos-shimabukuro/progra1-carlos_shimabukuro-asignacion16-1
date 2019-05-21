#include <iostream>
using namespace std;


float dtts(float *dollar, float *tcambio) {
	float soles;

	soles = *dollar * (*tcambio);
	cout << "Soles : " << soles << endl;

	return (soles);
}

float sttd(float *soles, float *tcambio) {
	float dollar;

	dollar = *soles / (*tcambio);
	cout << "Dolares : " << dollar << endl;

	return (dollar);
}


int main() {
	float valor, tCam;
	float *vaL, *tcambio;
	char conV;
	cout << "Tipo de convercion (D: Dolar - Sol; S: Sol - Dolar) : "; cin >> conV;
	cout << "Monto a comvertir : "; cin >> valor;
	cout << "Tipo de cambio : "; cin >> tCam;

	conV = toupper(conV);

	vaL = &valor;
	tcambio = &tCam;

	if (conV == 'D')
	{
		dtts(vaL, tcambio);
	}
	else
	{
		if (conV == 'S')
		{
			sttd(vaL, tcambio);
		}
	}
	cout << endl; system("pause"); return (0);
}