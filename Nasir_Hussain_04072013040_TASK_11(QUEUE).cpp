#include<iostream>
#include<string>
using namespace std;

template<typename T>
struct node {
    T data;
    node<T>* next;
};

template<typename T>
class queue {
private:
    node<T>* front, * rear;
public:
    queue()
    {
        front = rear = NULL;
    }
    ~queue()
    {
        make_empty();
    }
    void enqueue(const T& val)
    {
        node<T>* temp;
        temp = new node <T>;
        temp->data = val;
        temp->next = NULL;
        if (front == NULL) {
            front = rear = temp;
        }
        else
        {
            rear->next = temp;
            rear = temp;
        }
    }
    void dequeue()
    {
        if (empty())
            throw("queue is empty");
        node<T>* temp;
        temp = front;
        front = front->next;
        if (front == NULL)
            rear == NULL;
    }
    T fronts() const {
        if (empty())
            throw ("No element on front");
        return front->data;
    }
    void make_empty()
    {
        while (!empty())
            dequeue();
    }
    bool empty() const
    {
        return front == NULL;
    }
};

template<typename T>
bool palindrome(queue<T> &A, queue <T>&B)
{
    while (!A.empty() && !B.empty())
    {
       
       if (A.fronts()==B.fronts())
        {
           A.dequeue();
           B.dequeue();
            continue;
        }
       else
       {
           return false;
       }
    }
    return true;

}

int main()
{
    cout << "_______________________________\n";
    cout << "Nasir Hussain\n";
    cout << "04072013040\n";
    cout << "Task 11 : Queue (Palindrome)\n";
    cout << "--------------------------------\n";
	string s;
    queue <char>q;
    queue<char>temp;
	cout << "Enter string : ";
	getline(cin, s);
    cout << "Input in Lowercase : ";
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 65 && s[i] <= 92)
		{
			s[i] = s[i] + 32;
		}
		cout << s[i];
	}
    cout << endl;
    int nn = s.length();
    int l = s.length() / 2;
    for (int i = 0; i < l; i++)
    {
        q.enqueue(s[i]);
    }
    if (nn % 2 != 0)
    {
        l = l + 1;
    }
    for (int i=s.length()-1; i >=l; i--)
    {
        temp.enqueue(s[i]);
    }
    if (palindrome(q, temp))
    {
        for (int i = 0; i < s.length(); i++)
        {
            cout << s[i];
        }
        cout << " : is Palindrome\n";
   }
    else
    {
        for (int i = 0; i < s.length(); i++)
        {
            cout << s[i];
        }
        cout << " : is Not Palindrome\n";
    }
    return 0;
}