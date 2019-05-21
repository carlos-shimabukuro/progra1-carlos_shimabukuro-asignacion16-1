#include <iostream>
#include <math.h>

using namespace std;

double areaCir(float *rR) {
	double area;
	float r = *rR;
	area = 3.14159265359 * pow(r, 2);

	return (area);
}

int main() {
	float radio;
	float *rR;
	double area;

	cout << "Valor del Radio : "; cin >> radio;
	cout << endl;

	rR = &radio;
	area =areaCir(rR);

	cout << "Area = " << area;

	cout << endl; system("pause"); return(0);
}