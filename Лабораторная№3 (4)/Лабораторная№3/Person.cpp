#include "StdAfx.h"
#include "person.h"
#include <iostream>
using namespace std;
Person * Person::head = NULL;

Person::Person(void)
{
	cout << "вызывается конструктор персоны" << endl;
}

void Person::setname(char *name)
{
	this->name = name;
}

void Person::getname()
{
	cout << "имя персоны: " << this->name << endl;
}

Person::~Person(void)
{
	cout << "вызывается деструктор персона" << endl;
}

void Person::show()
{
	Person *p = head;
	while (p)
	{
		p->history();
		p = p->next;
	}
}

