#include<iostream>
using namespace std;

struct rain
{
    int day;
    double ml;
};

void swap(double &a, double &b)
{
    double temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    rain s[14];
    int i;
    for(i=0;i<14;i++)
    {
        cout<<"Enter date : ";
        cin>>s[i].day;
        cout<<"Enter rainfall in (mm) : ";
        cin>>s[i].ml;
    }
    bool c = true;
    while(c)
    {
        c = false;
        for(int i=0;i<13;i++)
        {
            if(s[i].ml<s[i+1].ml)
            {
                swap(s[i].ml,s[i+1].ml);
                swap(s[i].day,s[i+1].day);
                 c = true;
            }
           
        }
    }
    
    for(i=0;i<14;i++)
    {
        cout<<s[i].day<<"\t"<<s[i].ml<<endl;
    }

}