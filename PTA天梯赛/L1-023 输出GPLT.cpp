#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	char s[10000];
	int a[4] = {0};
	gets(s);
	for(int i = 0; i < strlen(s); i++)
	{
		if(s[i] == 'G' || s[i] == 'g') a[0]++;
		if(s[i] == 'P' || s[i] == 'p') a[1]++;
		if(s[i] == 'L' || s[i] == 'l') a[2]++;
		if(s[i] == 'T' || s[i] == 't') a[3]++;
	}
	int max;
	max = a[0];
	for(int i = 1; i < 4; i++)
	{
		if(a[i] > max) max = a[i]; 
	}
	for(int i = 0; i < max; i++)
	{
		if(a[0] > 0) 
		{
			cout << 'G';
			a[0]--;
		}
		if(a[1] > 0) 
		{
			cout << 'P';
			a[1]--;
		}
		if(a[2] > 0) 
		{
			cout << 'L';
			a[2]--;
		}
		if(a[3] > 0) 
		{
			cout << 'T';
			a[3]--;
		}
	}
 } 
