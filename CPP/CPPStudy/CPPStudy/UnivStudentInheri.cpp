//#include <iostream>
//#include <cstring>
//using namespace std;
//
//class Person
//{
//private:
//	int age;
//	char name[50];
//
//public:
//	Person(int myage, const char* myname)
//		:age(myage)
//	{
//		cout << "1" << endl;
//		strcpy_s(name, myname);
//	}
//	
//	void WhatYourName() const
//	{
//		cout << "My name is " << name << endl;
//	}
//
//	void HowoldAreYou() const
//	{
//		cout << "Im " << age << " years old" << endl;
//	}
//};
//
//class UnivStudent : public Person
//{
//private:
//	char major[50];
//public:
//	UnivStudent(const char* myname, int myage, const char* mymajor)
//		: Person(myage, myname)
//	{
//		cout << "2" << endl;
//		strcpy_s(major, mymajor);
//	}
//
//	void WhoAreYou() const
//	{
//		WhatYourName();
//		HowoldAreYou();
//		cout << "My major is " << major << endl << endl;
//	}
//};
//
//int main(void)
//{
//	UnivStudent ustd1("Lee", 22, "Computer eng.");
//	ustd1.WhoAreYou();
//
//	UnivStudent ustd2("Yoon", 21, "Electronic eng.");
//	ustd2.WhoAreYou();
//
//	return 0;
//}