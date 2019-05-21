#include <iostream>
#include <math.h>

using namespace std;

void areaCir(float *rR) {
	double area;
	float r = *rR;
	area = 3.14159265359 * pow(r, 2);
	
	cout << "Area : " << area << endl;
}

int main() {
	float radio;
	float *rR;

	cout << "Valor del Radio : "; cin >> radio;
	cout << endl;

	rR = &radio;
	areaCir(rR);

	cout << endl; system("pause"); return(0);
}