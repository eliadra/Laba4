#include "StdAfx.h"
#include "Rabochi.h"
#include <iostream>
using namespace std;

Rabochi::Rabochi(void)
{
	cout << "вызывается конструктор рабочего" << endl;
}

void Rabochi::setzarplata(int zarplata)
{
	this->zarplata = zarplata;
}

void Rabochi::getzarplata()
{
	cout << "зарплата рабочего: " << this->zarplata << endl;
}

Rabochi::~Rabochi(void)
{
	cout << "вызывается деструктор рабочего" << endl;
}

void Rabochi::history()
{
	cout << "История рабочего";
}

void Rabochi::add()
{
	if (!head)
	{
		head = this;
		this->next = NULL;
	}
	else
	{
		Person *p = head;
		if (p->next == NULL)
		{
			p->next = this;
			this->next = NULL;
		}
		else
		{
			while (p->next != NULL)
				p = p->next;
		}
		p->next = this;
		this->next = NULL;
	}
}