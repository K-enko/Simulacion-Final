#ifndef HEADER_H
#define HEADER_H

#include <string>

class Vehiculo
{
public:
	string color;
	string marca;
	Vehiculo();
	virtual void arrancar()=0;
	virtual void parar()=0;
	virtual void reposar()=0;
};

class Coche : public Vehiculo
{
public:
	int motor;
	Coche();
	void arrancar();
	void parar();
	void reposar();
};

class Moto : public Vehiculo
{
public:
	int cilindrada;
	Moto();
	void arrancar();
	void parar();
	void reposar();
};

class Taller
{
private:
	int max_vehiculos;
	int num_vehiculos = 0;
	Vehiculo *vehiculo[];
public:
	Taller(int);
	~Taller();
	void meter();
	void arreglar();
};

#endif