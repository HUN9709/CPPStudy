//#include <iostream>
//
//using namespace std;
//
//void SwapPointer(int *(&p1), int *(&p2))
//{
//	int* ptr = p1;
//	p1 = p2;
//	p2 = ptr;
//}
//
//int main(void)
//{
//	int num1 = 5;
//	int* ptr1 = &num1;
//
//	int num2 = 10;
//	int* ptr2 = &num2;
//	
//	SwapPointer(ptr1, ptr2);
//
//	cout << num1 << ' ' << num2 << endl;
//	cout << *ptr1 << ' ' << *ptr2 << endl;
//
//}