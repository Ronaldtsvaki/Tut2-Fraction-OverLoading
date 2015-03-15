# ifndef Fraction_H
# define Fraction_H

class Fraction{
public:
	Fraction();  //default constructor
	Fraction(int n, int d);
	void readFrac();
	void displayFrac();
	//f1.multiply(f2);
	Fraction multiply(Fraction); //multiplies two fractions to give a fraction

	Fraction operator+(Fraction &);  // allows f1+f2
	Fraction operator-(Fraction &); // allows f1-f2
private:
	int num;
	int den;              // the numerator and denominator
};

#endif