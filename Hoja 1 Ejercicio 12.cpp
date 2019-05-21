#include <iostream>
#include <math.h>

using namespace std;

double areaCir(float *rR) {
	double area;
	float r = *rR;
	area = 3.14159265359 * pow(r, 2);

	return (area);
}

double periCir(float *rR) {
	double perimetro;
	perimetro = (2 *3.14159265359) * *rR;

	return (perimetro);
}

int main() {
	float radio;
	float *rR;
	double area, perimetro;

	cout << "Valor del Radio : "; cin >> radio;
	cout << endl;

	rR = &radio;
	area = areaCir(rR);
	perimetro = periCir(rR);

	cout << "Area = " << area << endl; 
	cout << "Perimetro = " << perimetro << endl;

	cout << endl; system("pause"); return(0);
}