#include <iostream>

using namespace std;

void intercambiarV(int *x, int *y) {
	int z;
	if (*x > *y)
	{
		z = *y;
		*y = *x;
		*x = z;
	}
	else
	{
		if ((*x < *y) || (*x == *y))
		{
			*x = *x;
			*y = *y;
		}
		
	}
	cout << "X = " << *x << endl;
	cout << "Y = " << *y << endl;
}

int main() {
	int *xX, *yY;
	int xN, yN;

	cout << "Valor de X : "; cin >> xN;
	cout << "Valor de Y : "; cin >> yN;
	cout <<endl;

	xX = &xN; yY = &yN;

	intercambiarV(xX, yY);

	cout << endl; system("pause"); return(0);
}