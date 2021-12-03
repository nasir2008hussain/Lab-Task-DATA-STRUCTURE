#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
   cout<<"Nasir Hussain Task No 3"<<endl;
    fstream f_in, f_out;
    int i=0,j=0,k=0;
    cout<<"Two Coloumns"<<endl;
    f_out.open("myfile.csv");
    string id,name,age;
    if(f_out.is_open())
    {
      for(i=1;i<11;i++)
      {
        f_out<<i<<"\t";
        for(j=i;j<=i;j++)
        {
           f_out<<j*i<<"\n";
        }
      }
  
    f_out.close();
    }
    string line;
    f_in.open("myfile.csv");
    {
      if(f_in.is_open())
      {
        while(!f_in.eof())
        {
         getline(f_in,line);
         cout<<line<<"\t";
         cout<<endl;
        }

      }
    }
    f_in.close();
    cout<<endl;
    cout<<"\nThree Coloums"<<endl;
    f_out.open("myfile.csv",ios::app);
    {
       for(i=1;i<11;i++)
      {
        f_out<<i<<"\t";
        for(j=i;j<=i;j++)
        {
           f_out<<i*i<<"\t";
        }
        for(k=i;k<=i;k++)
        {
          f_out<<i*i*i<<"\n";
        }
      }
    }
    f_out.close();
     f_in.open("myfile.csv");
    {
      if(f_in.is_open())
      {
        while(!f_in.eof())
        {
         getline(f_in,line);
         cout<<line<<"\t";
         cout<<endl;
        }

      }
    }

return 0;
}