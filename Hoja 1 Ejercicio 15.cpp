#include <iostream>

using namespace std;

int factorial(int nN) {
	int fact = 1;
	for (int i = 1; i <= nN; i++)
	{ fact = fact * i;}
	
	return (fact);
}

float C(int *n, int *k) {
	float rest;
	rest = factorial(*n) / (factorial(*k) * factorial(*n - *k));
	
	cout << "Combinatorio = " << rest << endl;
	return (rest);
}

int main() {
	int n, k;
	int *nN, *kK;

	cout << "Valor de N : "; cin >> n;
	cout << "Valor de K : "; cin >> k;
	cout << endl;

	nN = &n;
	kK = &k;

	C(nN, kK);

	cout << endl; system("pause"); return (0);
}