#pragma once
#include "Person.h"
class Rabochi :
	public Person
{
protected:
	int zarplata;
public:
	Rabochi(void);
	void setzarplata(int x);
	void getzarplata();
	virtual~Rabochi(void); 

	virtual void history();
	void add();
};
