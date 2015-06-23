#include <iostream>
#include<conio.h>
#include "Person.h"

using namespace std;
using My_Class::Person;

int Vvod();
void Menu(Person *PA);
void Return(Person *PA);
void Create(Person *PA);
void Show_Sp(Person *PA);
void Edit(Person *PA);

int main()
{
	Person*PA;
	PA = new Person[5];
	Menu(PA);
	return 0;
}


int Vvod()
{
	int num;
	do
	{
		cin >> num;
		getchar();
		cout << endl;
	} while (num < 0 && num>5);
	return num;
}
void Menu(Person *PA)
{
	system("cls");
	cout << "1. Create  " << endl;
	cout << "2. Show    " << endl;
	cout << "3. Edit    " << endl;
	cout << "4. Exit    " << endl;
	int num = Vvod();
	switch (num)
	{
	case 1:
		Create(PA);
		break;
	case 2:
		Show_Sp(PA);
		break;
	case 3:
		Edit(PA);
		break;
	case 4:
		exit(0);
	}
}
void Return(Person *PA)
{
	char c=NULL;
		cout << "Back to main menu ? Y or N";
		cin >> c;
	if (c == 'y')
	{
		system("cls");
		Menu(PA);
	}
	else
		exit(0);

}
void Create(Person *PA)
{
	system("cls");
	for (int i = 0; i < 5; ++i)
	{
		cout << i + 1 << " ";
		PA[i].Set();
	}
	Return(PA);
}
void Show_Sp(Person *PA)
{
	system("cls");
	for (int i = 0; i < 5; ++i)
	{
		cout << i + 1 << " ";
		PA[i].Show();
	}
	Return(PA);
}
void Edit(Person *PA)
{
	system("cls");
	cout << "select the number of persons who for editing " << endl;
	int i = Vvod();
	PA[i].Set();
	Return(PA);
}