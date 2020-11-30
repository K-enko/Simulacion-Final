#include <iostream>
#include <string>
using namespace std;

#include "header.h"

int main()
{
	int menu;

	cout << "Bienvenido al programa del taller." << endl;
	cout << "Ingrese el numero maximo de vehiculos permitidos:" << endl;
	cout << "-> ";
	cin >> menu;
	cin.ignore();
	Taller *taller = new Taller(menu);

	do
	{
		cout << "1. Ingresar vehiculo" << endl;
		cout << "2. Reparar vehiculo" << endl;
		cout << endl;
		cout << "0. Salir" << endl;
		cout << endl;
		cout << "-> ";
		cin >> menu;
		cin.ignore();

		switch(menu)
		{
			case 1:

			taller -> meter();

			break;
			case 2:

			taller -> arreglar();

			break;
			case 0:

			taller -> ~Taller(); 

			break;
			default:

			cout << "No ingreso una opcion valida. Vuelva a intetar..." << endl;
		}
	}while(menu != 0);

	return 0;
}