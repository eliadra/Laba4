// �������������3.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "Person.h"
#include "Rabochi.h"
#include "Student.h"
#include "Inzhener.h"
#include "Tokar.h"
#include "Sluzachi.h"
#include "locale"
#include <iostream>
using namespace std;


int main()
{
	setlocale(LC_ALL, "rus");

	Person * person;
	person = new Rabochi;	

	Rabochi Mihail;
	Mihail.setname("������ �������");
	Mihail.getname();
	Mihail.setzarplata(1800000);
	Mihail.getzarplata();
	cout << endl;

	Mihail.add();
	Person::show();
	cout << endl;

	Student Mihaili;
	Mihaili.setname("����� �������");
	Mihaili.getname();
	Mihaili.setkof(5);
	Mihaili.getkof();
	cout << endl;

	Mihaili.add();
	Person::show();
	cout << endl;

	Student* f5 = new Student(&Mihail);
	f5->setname("������ �������");
	f5->getname();
	f5->Infa->setzarplata(20000);
	f5->Infa->getzarplata();
	f5->setkof(6);
	f5->getkof();
	cout << endl;

	Tokar e;
	e.setname("������ ������");
	e.getname();
	e.setzarplata(300000);
	e.getzarplata();
	e.setstaz(2);
	e.getstaz();
	cout << endl;

	e.add();
	Person::show();
	cout << endl;


	Inzhener d;
	d.setname("����� �������� ��������");
	d.getname();
	d.setzarplata(2300000);
	d.getzarplata();
	d.setstaz(3);
	d.getstaz();
	cout << endl;

	d.add();
	Person::show();
	cout << endl;


	Sluzachi f;
	f.setname("����");
	f.getname();
	f.setzarplata(1500000);
	f.getzarplata();
	f.setstaz(4);
	f.getstaz();
	cout << endl;

	f.add();
	Person::show();
	cout << endl;


	return 0;
}