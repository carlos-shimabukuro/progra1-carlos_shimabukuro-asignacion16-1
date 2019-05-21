#include <iostream>
#include <stdio.h>

using namespace std;

void intercambiar(int *x, int *y) {
	int z;
	z = *x;
	*x = *y;
	*y = z;

	cout << "X = " << *x << endl;
	cout << "Y = " << *y << endl;
}
		
int main() {
	int *x, *y;
	int xX, yY;

	cout << "Ingesar x :"; cin >> xX;
	cout << "Ingesar y :"; cin >> yY;

	cout << endl;

	x = &xX;
	y = &yY;

	intercambiar(x, y);

	cout << endl; system("pause"); return (0);
}