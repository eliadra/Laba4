#include "StdAfx.h"
#include "person.h"
#include <iostream>
using namespace std;
Person * Person::head = NULL;

Person::Person(void)
{
	cout << "���������� ����������� �������" << endl;
}

void Person::setname(char *name)
{
	this->name = name;
}

void Person::getname()
{
	cout << "��� �������: " << this->name << endl;
}

Person::~Person(void)
{
	cout << "���������� ���������� �������" << endl;
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

