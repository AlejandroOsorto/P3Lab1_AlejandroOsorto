#include <iostream>
#include <math.h>

using namespace std;

int menu(); //Menu

void sumatoria(int); //Ejercicio 1 - Sumatoria
void funcionEXP(int); //Ejercicio 2 - Funcion con exponente


int main()
{
	int opcionMenu = 0;
	
	while ((opcionMenu = menu()) != 3)
	{
		if (opcionMenu == 1)
		{
			cout << "Ejercicio 1" << endl;
			int n = 0;
			while (n < 1)
			{
				cout << "Ingrese un numero: ";
				cin >> n;
			}
			sumatoria(n);
		}
		else 
		{
			if (opcionMenu == 2)
			{
				cout << "Ejercicio 2" << endl;
				int n = 0;
				cout << "Ingrese un numero: ";
				cin >> n;
				funcionEXP(n);
			}
			
		}
	}
	
	return 0;
}

int menu()
{
	int opcionMenu = 0;
	
	cout << "----MENU----\n";
	cout << "1) Ejercicio 1\n";
	cout << "2) Ejercicio 2\n";
	cout << "3) Salir" << endl;
	cout << "------------\n";
	
	
	cin >> opcionMenu;
	
	return opcionMenu;
}

void sumatoria(int n)
{
	double respuesta = 0;
	for (int i = 1; i <= n; i++)
	{
		double numerador = (2.0*i)-1.0;
		double denominador = i*(i+1.0);
		respuesta += numerador / denominador;
	}
	cout << "S(" << n << ") = " << respuesta << endl;
	
}

void funcionEXP(int n)
{
	double denominador = 1.0 + exp(n);
	double respuesta = 1.0 / denominador;
	cout << "f(" << n << ") = " << respuesta << endl;
}