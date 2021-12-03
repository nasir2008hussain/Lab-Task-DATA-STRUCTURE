#include<iostream>
#include<cmath>
using namespace std;

template<typename T>
class Calculator
{
private:
	T n1,n2;
	T result;
public:
	Calculator(T a, T b)
	{
		n1 = a;
		n2 = b;
	}
	T add()
	{
		result = n1 + n2;
		return result;

	}
	T sub()
	{
		result = n1 - n2;
		return result;
	}
	T mult()
	{
		result = n1 * n2;
		return result;
	}
	T divide()
	{
		if (n2 == 0)
			cout << "Denominator can't be zero\n";
		else
		{
			result = n1 / n2;
			return result;
		}

	}
	void sq()
	{
		cout << "Square root of " << n1 << " : " << sqrt(n1) << endl;
		cout << "Square root of " << n2 << " : " << sqrt(n2) << endl;

	}
	void cube()
	{
		cout << "Cube root of " << n1 << " : " << cbrt(n1) << endl;
		cout << "Cube root of " << n2 << " : " << cbrt(n2) << endl;


	}
};

int main()
{
	int a1;
	float a2;
	cout << "Enter number <int> 1 : ";
	cin >> a1;
	cout << "Enter number <float> 2 : ";
	cin >> a2;
	Calculator <float>s1(a1,a2);
	cout << "\nAddition\n";
	cout << s1.add() << endl;
	cout << "\nSubstraction\n";
	cout << s1.sub()<<endl;
	cout << "\nMultipication\n";
	cout << s1.mult()<<endl;
	cout << "\nDivision\n";
	cout << s1.divide()<<endl;
	cout << "\nSquare Root\n";
	s1.sq();
	cout << "\nCube Root\n";
	s1.cube();
	


}