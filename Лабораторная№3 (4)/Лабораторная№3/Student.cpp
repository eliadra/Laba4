#include "StdAfx.h"
#include "student.h"
#include <iostream>
using namespace std;

Student::Student(void)
{
	cout << "вызывается конструктор студента" << endl;
}

Student::Student(Rabochi *Infa)
{
	this->Infa = Infa;
}

void Student::setkof(int x)
{
	this->kof = x;
}

void Student::getkof()
{
	cout << "коэффициент студента: " << this->kof << endl;
}

Student::~Student(void)
{
	cout << "вызывается деструктор студента" << endl;
}

void Student::history()
{
	cout << "История студента"; 
}

void Student::add()
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

