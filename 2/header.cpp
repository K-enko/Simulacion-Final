#include <iostream>
#include <string>
using namespace std;

#include "header.h"

Taller::Taller(int aux)
{
	max_vehiculos = aux;
}

Taller::~Taller()
{}

void Taller::meter()
{
	if(num_vehiculos < max_vehiculos)
	{
		int menu;

		cout << "Determina el tipo de vehiculo a ingresar:" << endl;
		cout << "1. Coche" << endl;
		cout << "2. Moto" << endl;
		cout << endl;
		cout << "-> ";
		cin >> menu;

		if(menu == 1)
		{
			vehiculo[num_vehiculos] = new Coche();
			cout << "Ingrese la marca del vehiculo: ";
			getline(cin, vehiculo[num_vehiculos] -> marca);
			cout << "Ingrese el color del vehiculo: ";
			getline(cin, vehiculo[num_vehiculos] -> color);
			cout << "Ingrese el motor del vehiculo: ";
		}
		else
		{
			if(menu == 2)
			{
				vehiculo[num_vehiculos] = new Moto();
			    cout << "Ingrese la marca del vehiculo: ";
			    getline(cin, vehiculo[num_vehiculos] -> marca);
			    cout << "Ingrese el color del vehiculo: ";
			    getline(cin, vehiculo[num_vehiculos] -> color);
			}
		}
	}
	else
	{
		cout << "Se alcanzo el maximo de vehiculos permitidos." << endl;
	}

	num_vehiculos++;
}

void Taller::arreglar()
{
	for(int i=0 ; i<num_vehiculos ; i++)
	{
		cout << "Marca: " << vehiculo[i] -> marca << endl;
		cout << "Color: " << vehiculo[i] -> color << endl;
		vehiculo[i] -> arrancar();
		cout << endl;
	}
}

Vehiculo::Vehiculo()
{}

Coche::Coche()
{}

void Coche::arrancar()
{
	cout << "El coche arranco." << endl;
}

void Coche::parar()
{
	cout << "El coche se paro." << endl;
}

void Coche::reposar()
{
	cout << "El coche esta en reposo." << endl;
}

Moto::Moto()
{}

void Moto::arrancar()
{
	cout << "La moto arranco." << endl;
}

void Moto::parar()
{
	cout << "La moto se paro." << endl;
}

void Moto::reposar()
{
	cout << "La moto esta en reposo." << endl;
}