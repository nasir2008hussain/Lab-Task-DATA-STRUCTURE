#include<iostream>
using namespace std;


void display(int a[], int b)
{
	char cnvrt[7];
	for (int i = 0; i < b; i++) {
		cnvrt[i] = char(a[i]);
		cout << cnvrt[i] << endl;
	}
}
void swap(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void selection(int a[], int n)
{
	int i, j, m;
	for (i = 0; i < n - 1; i++)
	{
		m = i;
		for (j = i + 1; j < n; j++)
		{
			if (a[j] < a[m])
			{
				m = j;
			}
		}
		if (a[i] > a[m])
		{
			swap(a[i], a[m]);
		}
	}
}

int main()
{
	int i;
	char alph[7] = { 'Z','X','C','V','B','N','M' };
	int intt[7];
	for (i = 0; i < 7; i++)
	{
		intt[i] = int(alph[i]);
	}
	selection(intt, 7);
	display(intt, 7);

	
}