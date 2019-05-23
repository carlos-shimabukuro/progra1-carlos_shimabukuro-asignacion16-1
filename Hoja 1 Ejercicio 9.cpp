#include <iostream>

using namespace std;

bool fechaV(int dia, int mes, int annio) {
	bool valido, bisiesto;
	if (annio % 4 == 0 && (annio % 100 != 0 || annio % 400 != 0))
	{
		bisiesto = 1;
	}
	else bisiesto = 0;

	if (bisiesto == 1)
	{
		if ((mes == 2) && (1 <= dia) && (dia <= 29))
		{
			valido = 1;
		}
		else if ((1 <= dia) && (dia <= 31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12))
		{
				valido = 1;
		}
		else if ((1 <= dia) && (dia <= 30) && (mes == 4 || mes == 6 || mes == 9 || mes == 11))
		{
				valido = 1; 
		}
		else valido = 0;
	}
	else if (bisiesto == 0)
	{
		if ((mes == 2) && (1 <= dia) && (dia <= 28))
		{
			valido = 1;
		}
		else if ((1 <= dia) && (dia <= 31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12))
		{
			valido = 1;
		}
		else if ((1 <= dia) && (dia <= 30) && (mes == 4 || mes == 6 || mes == 9 || mes == 11))
		{
			valido = 1;
		}
		else valido = 0;
	}
	
	return (valido);
}

int main() {
	int diaN, mesN, annioN;
	bool validacion;

	do {
		cout << "Ingrese una fecha (dd-mm-aa) :"; cin >> diaN >> mesN >> annioN;
		cout << endl;
		if (diaN >= 1 && diaN <= 31 && mesN >= 1 && mesN <= 12)
		{
			break;
		}
	}
	while (diaN < 1 && diaN > 31 && mesN < 1 && mesN >12);

	validacion = fechaV(diaN, mesN, annioN);
	if (validacion == 1)
	{
		cout << "Fecha Valida" << endl;
	}
	else cout << "Fecha Invalida" << endl;

	cout << endl; system("pause"); return (0);
}