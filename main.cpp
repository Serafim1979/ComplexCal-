#include<iostream>
#include"Compl.h"
////////////////////////////////////////
using std::cout;
using std::cin;
using std::endl;
////////////////////////////////////////
int main()
{
	Complex a(3.0, 4.0);
	Complex c;
	cout << "Enter a complex number (q to cancel): " << endl;

	while (cin >> c)
	{
		cout << "This is " << c << endl;
		cout << "The value of the conjugate number (complex conjugate) " << ~c << endl;
		cout << "a - " << a << endl;
		cout << "a + c = " << a + c << endl;
		cout << "a - c = " << a - c << endl;
		cout << "a * c = " << a * c << endl;
		cout << "2 * c = " << 2 * c << endl;

		cout << "Enter a complex number (q to cancel): " << endl;
	}
	cout << "Bye "<< endl;
	system("pause");
	return 0;
}