#include<iostream>
#include<cstring>
using namespace std;

template<typename Z>
Z function_t(int a, float x,int b,double y)
{
	Z result;
	result = (a * x) + (b * y);
	return result;
}


//to make func_mult for string specialized
template<typename T>
T func_mult(T a, int b)
{
	return a * b;
}
template<>
string func_mult(string x, int n)
{
	int i = 1;
	string X;
	while (i <= n)
	{
		X = X + x;
		i++;
	}
	return X;
}

int main()
{
	cout << "_____________________\n";
	cout << "Nasir Hussain\n";
	cout << "04072013040\n";
	cout << "Task NO # 07\n";
	cout << "---------------------\n";
	int a = 1;
	float x = 2.4;
	int b = 2;
	double y = 4.5;
	cout << "_______________________\n";
	cout << "Function Template\n";
	cout << "-----------------------\n";
	cout<<function_t<double>(a, x, b, y)<<endl;
	string X = "This is Nasir ";
	int n = 3;
	cout << "_____________________________\n";
	cout << "Specialized Function Template\n";
	cout << "------------------------------\n";
	cout<<func_mult<string>(X, n)<<endl<<endl;
	return 0;
}