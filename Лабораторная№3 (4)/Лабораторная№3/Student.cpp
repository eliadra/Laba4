#include "StdAfx.h"
#include "student.h"
#include <iostream>
using namespace std;

Student::Student(void)
{
	cout << "���������� ����������� ��������" << endl;
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
	cout << "����������� ��������: " << this->kof << endl;
}

Student::~Student(void)
{
	cout << "���������� ���������� ��������" << endl;
}

void Student::history()
{
	cout << "������� ��������"; 
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

