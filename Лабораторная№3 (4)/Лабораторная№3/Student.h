#pragma once
#include "person.h"
#include "Rabochi.h"
class Student :
	public Person
{
	int kof;
public:
	Rabochi *Infa;
	Student(void);
	Student(Rabochi* Infa);
	void setkof(int x);
	void getkof();
	virtual~Student(void);

	virtual void history();
	void add();
};