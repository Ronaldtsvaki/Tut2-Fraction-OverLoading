# ifndef Fraction_H
# define Fraction_H

class Fraction{
public:
	Fraction(int n=1, int d=1);
	void readFrac();
	void displayFrac();
	//f1.multiply(f2);
	Fraction multiply(Fraction); //multiplies two fractions to give a fraction
	Fraction divide(Fraction); // devides f1 by f2
	Fraction operator+(Fraction &);  // allows f1+f2
	Fraction operator-(Fraction &); // allows f1-f2
private:
	int num;
	int den;              // the numerator and denominator
};

#endif