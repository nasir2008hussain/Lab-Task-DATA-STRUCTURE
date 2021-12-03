#include<iostream>
#include<cmath>
using namespace std;

int add(int a, int b)
{
	int c;
	c = a + b;
	return c;
}

int sub(int a, int b)
{
	int c=0;
	c = a - b;
	return c;
}

int mul(int a, int b)
{
	int c=0;
	c = a * b;
	return c;
}
float division(int a, int b)
{
	   float c=0.0;
		c = a / b;
		return c;
}

double square(int a)
{
    double b;
	b = sqrt(a);
	return b;

}

double power(int a,int b)
{
	
	double c;
	c = pow(a, b);
	return c;
}

int main()
{
	int a, b;
	cout << "Enter first number : ";
	cin >> a;
	cout << "Enter second number : ";
	cin >> b;
	cout << "Addition\n";
	cout<<a<<" + "<<b<<" = "<<add(a, b)<<endl;
	cout << "Subtraction\n";
	cout << a << " - " << b << " = " << sub(a, b)<<endl;
	cout << "Multipication\n";
	cout << a << " * " << b << " = " << mul(a, b)<<endl;
	cout << "Division\n";
	cout << a << " / " << b << " = " << division(a, b)<<endl;
	cout << "Square Root\n";
	cout << "Square root of " << a << " is : " << square(a)<<endl;
	cout << "Square root of " << b << " is : " << square(b) << endl;
	cout << "Power\n";
	cout << "(" << a << ")^" << b << " = " << power(a, b) << endl;



}