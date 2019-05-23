#include <iostream>

using namespace std;

int invertirN(int numero) {
	int suma = 0;

	while (numero >0 )
	{
		suma = suma * 10 + numero % 10;
		numero = numero / 10;
	}

	return (suma);
}

int main() {
	int n;
	do
	{
		cout << "Ingrese numero : "; cin >> n;
		cout << endl;

		if (n > 1000)
		{
			break;
		}
	} while (n < 1000);

	cout << "Numero Invertido : " << invertirN(n) << endl;

	cout << endl; system("pause"); return (0);

}