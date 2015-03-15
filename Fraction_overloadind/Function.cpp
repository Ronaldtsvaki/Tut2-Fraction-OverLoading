# include <iostream>
# include "fraction.h"
using namespace std;

Fraction::Fraction(int n, int d)  //constructor
{

	num = n;
	den = d;
}
void Fraction::readFrac()
{
	char slash;
	cout << "Enter a fraction in the form x/y):  ";
	cin >> num >> slash >> den;
}
void Fraction::displayFrac()
{
	int temp;
	int d = den;
	int n = num;
	while (d != 0)
	{
		temp = d;
		d = n%d;
		n = temp;
	}

	cout << num / n << "/" << den / n;
}


Fraction Fraction::multiply(Fraction f)

	Fraction temp(num*f.num, den*f.den);
	return temp;
}
Fraction Fraction::divide(Fraction f)
{
	Fraction temp(num*f.den, den*f.num);
	return temp;
}

//overloading an operator
Fraction Fraction::operator+(Fraction &f)
{
	Fraction temp(num*f.den + den*f.num, den*f.den);
	return temp;

}


Fraction Fraction::operator-(Fraction &f)
{
	Fraction temp(num*f.den - den*f.num, den*f.den);
	return temp;

}


int main()
{

	Fraction f1, f2; //f1 and f2 are objects: instance of the fraction class
	Fraction f3;     //f3 stores the answer of f1*f2
	Fraction f4;
	cout << "Enter the first fraction:  " << endl;
	f1.readFrac();
	cout << "Enter the second fraction:  " << endl;
	f2.readFrac();

	f1.displayFrac();
	cout << "*";
	f2.displayFrac();
	cout << "=";
	f3 = f1.multiply(f2);
	f3.displayFrac();
	cout << endl;
	f3 = f1.divide(f2);
	f3.displayFrac();
	cout << endl;

	f1.displayFrac();
	cout << "+";
	f2.displayFrac();
	cout << "=";

	//overloading the + operator which allows addition
	f3 = f1 + f2;
	f3.displayFrac();


	cout << endl;


	f1.displayFrac();
	cout << "-";
	f2.displayFrac();
	cout << "=";
	f4 = f1 - f2;
	f4.displayFrac();
	cout << endl;


	system("PAUSE");
	return 0;
}