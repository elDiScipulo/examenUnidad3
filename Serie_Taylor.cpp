#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;

double factorial (float n);
double taylor(float n, float x);

int main()
{
	float n, x;
	cout<<"Expansion en series de MacLaurin (Serie de Taylor)"<<endl<<endl;
	cout<<"Ingrese el numero de Iteraciones (n): "; cin>>n;
	cout<<"Ingrese el valor a estimar (x): "; cin>>x;
	printf("El valor de la serie de MacLaurin para n = %f, x =%f es = %f\n", n, x, taylor(n, x));
	system("pause");
}

double taylor(float n, float x)
{
	double t, s = 0;
	for (float i = 0; i < n; i++)
	{
		t = pow (x, i) / factorial(i);
		s += t;
	}
	return s;
}

double factorial(float n) 
{
	double fac =1;
	for (float i = 2; i <= n; i++)
	{
		fac *= i;
	}
	return fac;
}
