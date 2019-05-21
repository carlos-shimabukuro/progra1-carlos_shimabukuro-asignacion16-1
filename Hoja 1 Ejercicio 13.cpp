#include <iostream>
#include <math.h>

using namespace std;

void aypCir(float *rR) {
	double area, peri;
	float r = *rR;
	area = 3.14159265359 * pow(r, 2);
	peri = (2 * 3.14159265359) * r;

	cout << "Area = " << area << endl;
	cout << "Perimetro = " << peri << endl;
}


int main() {
	float radio;
	float *rR;

	cout << "Valor del Radio : "; cin >> radio;
	cout << endl;

	rR = &radio;

	aypCir(rR);

	cout << endl; system("pause"); return(0);
}