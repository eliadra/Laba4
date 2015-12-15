#pragma once
#include "Rabochi.h"

class Inzhener:
	public Rabochi
{
protected:
	int staz;
public:
	Inzhener(void);
	void setstaz(int x);
	void getstaz();
	virtual ~Inzhener(void);
	
	virtual void history();;
};