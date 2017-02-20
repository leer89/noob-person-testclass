// person.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	Person(); // copy constructor
	string getName() { return name; }
	int getAge() { return age; }
	void setName(string n);
	void setAge(int a);
private:
	string name;
	int age;
};

int main()
{
	Person emp1; // new person object
	string emp1Name;
	int emp1Age;

	cout << "Name: " << endl;
	cin >> emp1Name;
	cout << "Age: " << endl;
	cin >> emp1Age;

	emp1.setName(emp1Name);
	emp1.setAge(emp1Age);

	cout << "Employee name is: " << emp1.getName() << endl;
	cout << "Employee age is: " << emp1.getAge() << endl;

	return 0;
}

Person::Person()
{
	name = "";
	age;
}

void Person::setName(string n)
{
	name = n;
}

void Person::setAge(int a)
{
	age = a;
}