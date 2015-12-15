#pragma once
#include "Rabochi.h"
//множественное наследование
class Sluzachi :
	public Rabochi
{
protected:
	int staz;
public:
	Sluzachi(void);
	void setstaz(int x);
	void getstaz();
	virtual ~Sluzachi(void);
	
	virtual void history();
};