#include <iostream>  // plik nag��wkowy zawieraj�cy funkcj� cout
using namespace std; // przestrze� nazw biblioteki standardowej

/* Program prezentuj�cy zmienne w C++ */

int main()
{
	short a = 128;    // minimum 2 bajty
	int b = 123456;   // minimum 2 bajty
	long c = 123456L; // minimum 4 bajty
		
	float f = 1.23;         // minimum 4 bajty
	double e = 1.23456789;  // minimum 8 bajt�w

	cout << "Short: " << a << " Rozmiar: " << sizeof(short) << endl;
	cout << "Integer: " << b << " Rozmiar: " << sizeof(int) << endl;
	cout << "Long: " << c << " Rozmiar: " << sizeof(long) << endl;
	cout << "Float: " << f << " Rozmiar: " << sizeof(float) << endl;
	cout << "Double: " << e << " Rozmiar: " << sizeof(double) << endl;

	/* rozmiar zmiennej jest istotny:
	   - przy tworzeniu program�w na urz�dzenia takie jak mikrokontrolery np. ATmega64 z 64 kB pami�ci
	     wbudowanej.
	   - w kryptografii cz�sto musimy pos�ugiwa� si� wielkimi liczbami: du�o wi�kszymi ni� zakres long
	   - musimy o tym pami�ta� aby zapobiega� tzw. przepe�nieniu (overflow) - jest to cz�sto jeden z powod�w
	     dziwnego dzia�ania programu
	*/ 

	return 0;
}
