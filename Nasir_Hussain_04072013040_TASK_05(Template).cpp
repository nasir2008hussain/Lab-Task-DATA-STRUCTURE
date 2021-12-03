#include<iostream>
#include<cmath>
using namespace std;

template<typename T>
T quadratic (T a,T b,T c)
{
    T result1,result2;
    result1 = ((-b)+sqrt((b*b)-(4*a*c)))/(2*a);
    result2 = ((-b)-sqrt((b*b)-(4*a*c)))/(2*a);
    cout<<"Result 1 : "<<result1<<endl;
    if(result1>0)
    {
        cout<<"Result1 is grater than 0"<<endl;
    }
    else if(result1==0)
    {
        cout<<"Result1 is equal to 0"<<endl;
    }
    else 
    {
        cout<<"Result1 is less than 0"<<endl;
    }
    cout<<"Result 2 : "<<result2<<endl;
     if(result2>0)
    {
        cout<<"Result2 is grater than 0"<<endl;
    }
    else if(result2==0)
    {
        cout<<"Result2 is equal to 0"<<endl;
    }
    else 
    {
        cout<<"Result2 is less than 0"<<endl;
    }
    return 0;

}

int main()
{
    cout<<"___________________\n";
    cout<<"Nasir Hussain\n";
    cout<<"REG # 04072013040\n";
    cout<<"Task NO 5\n";
    cout<<"--------------------\n";
    float a = 23.12;
    long b = 1234;
    float c = 23.44;
    cout<<"________________________"<<endl;
    cout<<"Quadratic Equation\n";
    cout<<a<<"x^2 + "<<b<<"x + "<<c<<endl; 
    cout<<"-------------------------"<<endl;
    cout<<"______________________________\n";
    cout<<"Rusult of Quadratic Equation\n";
    cout<<"-------------------------------\n";
    quadratic<float>(a,b,c);
}