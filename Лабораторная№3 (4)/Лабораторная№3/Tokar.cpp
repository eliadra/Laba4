#include "StdAfx.h"
#include <iostream>
#include "Tokar.h"
using namespace std;

Tokar::Tokar(void)
{
	cout << "���������� ����������� ���������" << endl;
}

void Tokar::setstaz(int x)
{
	this->staz = x;
}

void Tokar::getstaz()
{
	cout << "���� ������: " << this->staz << endl;
}

Tokar::~Tokar()
{
	cout << "���������� ���������� ���������" << endl;
}
void Tokar::history()
{
	cout << "������� ������";
}
