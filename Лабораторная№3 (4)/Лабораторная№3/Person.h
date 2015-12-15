#pragma once
class Person
{
protected:
	static Person *head;
	char *name;
public:
	Person *next;
	Person(void);
	void setname(char *name);
	void getname();
	virtual~Person(void);

	static void show();
	virtual void history() = 0;
	virtual void add() = 0;
};