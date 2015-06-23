#pragma once
namespace My_Class
{
	class Person
	{
	private :
		char* Name;
		int Age;
		char* Pol;
		char* Tel;
	public:
		Person();
		void setName();
		char* getName();
		void setAge();
		int getAge();
		void setPol();
		char* getPol();
		void setTel();
		char* getTel();
		void Show();
		void Set();
		~Person();
	};
}
