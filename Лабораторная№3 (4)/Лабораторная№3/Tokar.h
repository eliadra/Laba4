#pragma once
#include "Rabochi.h"

class Tokar :
	public Rabochi
{
protected:
	int staz;
public:
	Tokar(void);
	void setstaz(int x);
	void getstaz();
	virtual ~Tokar(void);
	
	virtual void history();
};