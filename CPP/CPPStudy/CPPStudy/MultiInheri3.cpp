//#include <iostream>
//using namespace std;
//
//class Base
//{
//public:
//	int data;
//	Base() { cout << "Base Constructor" << endl; }
//	Base(int num) { cout << "wtf" << endl; data = num; }
//	void SimpleFunc() { cout << "Base One" << endl; }
//	void PrintData() { cout << data << endl; }
//};
//
//class MiddleDerivedOne : virtual public Base
//{
//public:
//	MiddleDerivedOne()
//		: Base()
//	{
//		data = 5;
//		cout << "MiddleDerivedOne Constructor" << endl;
//	}
//
//	void MiddleFuncOne()
//	{
//		SimpleFunc();
//		cout << "MiddleDerivedOne" << endl;
//	}
//};
//
//class MiddleDerivedTwo : virtual public Base
//{
//public:
//	MiddleDerivedTwo()
//		: Base()
//	{
//		data = 10;
//		cout << "MiddleDerivedTwo Constructor" << endl;
//	}
//
//	void MiddleFuncTwo()
//	{
//		SimpleFunc();
//		cout << "MiddleDerivedTwo" << endl;
//	}
//};
//
//class LastDerived : public MiddleDerivedOne, public MiddleDerivedTwo
//{
//public:
//	LastDerived()
//		: MiddleDerivedOne(), MiddleDerivedTwo()
//	{
//		cout << "LastDerived Constructor" << endl;
//	}
//
//	void ComplexFunc()
//	{
//		MiddleFuncOne();
//		MiddleFuncTwo();
//		SimpleFunc();
//		PrintData();
//	}
//};
//
//int main(void)
//{
//	LastDerived ldr;
//
//
//	ldr.ComplexFunc();
//
//	return 0;
//}