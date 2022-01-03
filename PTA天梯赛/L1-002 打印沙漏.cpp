#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n, a, b, m;
	char c;
	cin >> a >> c;
	b = (a+1)/2;
	b = sqrt(b);
	n = a - 2*b*b + 1;
	m = b;
	for(int i = 0; i < b; i++)
	{
		for(int k = 0; k < i; k++)
		{
			cout << " ";
		}
		for(int j = 0; j < 2*m-1; j++)
		{
			cout << c;
		}
		cout << endl;
		m--;
	}
	m = 2;
	for(int i = 1; i < b; i++)
	{
		for(int k = 1; k < b-i; k++)
		{
			cout << " ";
		}
		for(int j = 0; j < 2*m-1; j++)
		{
			cout << c;
		}
		cout << endl;
		m++;
	}
	cout << n;
}
