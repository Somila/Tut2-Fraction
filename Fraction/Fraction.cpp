#include <iostream>
using namespace std;

class Fraction
{
public:
	Fraction(){};
	~Fraction(){};
	void setFraction(int upper, int lower)
	{
		numerator = upper;
		denomenator = lower;
	}
	int getNumerator()
	{
		return numerator;
	}
	int getDenomenator()
	{
		return denomenator;
	}

	Fraction Add(Fraction A, Fraction B)
	{
		int num;
		int den;
		Fraction temp;

		num = (A.getNumerator()*B.getDenomenator()) + (A.getDenomenator()*B.getNumerator());
		den = A.getDenomenator()*B.getDenomenator();
		temp.setFraction(num, den);
		return temp;
	}
	Fraction Subtract(Fraction A, Fraction B)
	{
		int num;
		int den;
		Fraction temp;

		num = (A.getNumerator()*B.getDenomenator()) - (A.getDenomenator()*B.getNumerator());
		den = A.getDenomenator()*B.getDenomenator();
		temp.setFraction(num, den);
		return temp;
	}
	Fraction Multiply(Fraction A, Fraction B)
	{
		int num;
		int den;
		Fraction temp;

		num = A.getNumerator()*B.getNumerator();
		den = A.getDenomenator()*B.getDenomenator();
		temp.setFraction(num, den);
		return temp;
	}
	Fraction Divide(Fraction A, Fraction B)
	{
		int num;
		int den;
		Fraction temp;

		num = A.getNumerator()*B.getDenomenator();
		den = A.getDenomenator()*B.getNumerator();
		temp.setFraction(num, den);
		return temp;
	}
	void Print(Fraction X)
	{
		char slash;
		cout << X.getNumerator() << slash << X.getDenomenator();
	}
private:
	int numerator;
	int denomenator;
};

int main()
{
	Fraction f;
	char slash;
	int top;
	int bottom;
	cout << "enter the first fraction" << endl;
	cin >> top >> slash >> bottom;
	f.setFraction(top, bottom);

	cout << "enter the second fraction" << endl;
	cin >> top >> slash >> bottom;
	f.setFraction(top, bottom);

	cout << endl;
	system("pause");
}