#include "StdAfx.h"
#include <iostream>
#include "Inzhener.h"
using namespace std;

Inzhener::Inzhener(void)
{
	cout << "вызывается конструктор служащего" << endl;
}

void Inzhener::setstaz(int x)
{
	this->staz = x;
}

void Inzhener::getstaz()
{
	cout << "стаж работы: " << this->staz << endl;
}

void Inzhener::history()
{
	cout << "История инженера";
}

Inzhener::~Inzhener()
{
	cout << "вызывается деструктор служащего" << endl;
}