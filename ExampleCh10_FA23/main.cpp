#include <iostream>

using namespace std;

int main()
{
	int x = 42;

	int* p = &x;

	cout << "x = " << x << endl;
	cout << "&x = " << &x << endl;
	cout << "p = " << p << endl;
	cout << "*p = " << *p << endl;
	cout << "&p = " << &p << endl;


	return 0;
}