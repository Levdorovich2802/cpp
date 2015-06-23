#include<iostream>;
#include "Person.h"

using namespace std;
namespace My_Class
{
	Person::Person()
	{
		Name = new char[50];
		Age = 0;
		Pol = new char[10];
		Tel = new char[15];
	}
	void Person::setName()
	{
		gets(Name);
	}
	char* Person::getName()
	{
		return Name;
	}
	void Person::setAge()
	{
		cin >> Age;
		getchar();
	}
	int Person::getAge()
	{
		return Age;
	}
	void Person::setPol()
	{
		gets(Pol);
	}
	char* Person::getPol()
	{
		return Pol;
	}
	void Person::setTel()
	{
		gets(Tel);
	}
	char* Person::getTel()
	{
		return Tel;
	}
	void Person::Show()
	{
		cout << " Name     "<< getName()<<endl;
		cout << " Age      "<<getAge() << endl;
		cout << " Pol      "<<getPol() << endl;
		cout << " Tel      "<<getTel() << endl;
	}
	void Person::Set()
	{
		cout << "Name ";
		setName();
		cout<< endl;
		cout << "Age ";
		setAge();
		cout<< endl;
		cout << "Pol ";
		setPol();
		cout << endl;
		cout << "Telephone ";
		setTel();
		cout << endl;
	}
	Person::~Person()
	{
	}
}