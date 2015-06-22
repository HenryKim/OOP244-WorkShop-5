//OOP244
//025 741 125
//Hyungi Kim
//workshop 5 Fraction.h
//7/5/2013
class Fraction{
	int numerator;
 int denominator;
 int simp_n;
 int simp_d;
 int i;
 int temp;
public:
	Fraction();
	Fraction(int x ,int y);
	void enter();
	void simplify();
	void display() const;
	Fraction operator+= (const Fraction& rightOp);
	friend bool  operator == (const Fraction& leftOp, const Fraction&rightOp);
};
Fraction operator+ (const Fraction&leftOp, const Fraction&rightOp);
