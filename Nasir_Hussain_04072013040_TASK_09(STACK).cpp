#include<iostream>
#include<string>
using namespace std;

template<typename T>
class stack
{
private:
    T* data;
    int n;
    int top_idx;
    int space;
public:
    stack(int s)
    {
        n = s;
        data = new T[s];
        top_idx = -1;
        space = 0;
    }
    ~stack()
    {
        delete[]data;
    }
    void push(const T &val)
    {
        top_idx++;
        if (isspace(val))
            space++;
         data[top_idx] = val;
    }
    void pop()
    {
        top_idx--;
    }

    T top() const {
        return data[top_idx];
    }
    bool empty() const
    {
        return top_idx == -1;
    }

    bool balance() const
    {
        return space % 2 != 0;
    }
};


int main()
{
    cout << "______________________\n";
    cout << "Nasir Hussain" << endl;
    cout << "04072013040\n";
    cout << "Task 9 : Stack \n";
    cout << "----------------------\n";
    char choice;
    string ch;
    cout << "______________________________________\n";
    cout << "Enter string : ";
    getline(cin, ch);
    cout << "--------------------------------------\n";
    int u = ch.length();
    stack<char>s(u);
    for (int i = 0; i < u; i++)
    {
        s.push(ch[i]);
    }
    cout << "______________________________________\n";
    cout << "Checking Balance : "<<ch<<endl;
    cout << "--------------------------------------\n";
    cout << "________________________________\n";
    cout << "Result : ";
    if (s.balance())
        cout << "Balance\n";
    else
        cout << "Not Balance\n";
    cout << "--------------------------------\n";
   
}