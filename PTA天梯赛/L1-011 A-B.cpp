#include<stdio.h>
#include<string.h>

int main()
{
//	void myanswer(int lena, int lenb, char a[], char b[]);
	void easyanswer(int lena, int lenb, char a[], char b[]);
	char a[10001],b[10001];
	gets(a); gets(b);
	int lena = strlen(a);
	int lenb = strlen(b);
//	myanswer(lena, lenb, a, b);
	easyanswer(lena, lenb, a, b);
}
void myanswer(int lena, int lenb, char a[], char b[])
{
	int sum = 0;
	for(int i = 0; i < lenb; i++)
	for(int j = 0; j < lena; j++)
	{
		if(a[j] == b[i])
		{	
		for(int n = j; n < lena-1; n++)
		a[n] = a[n+1];
		sum++;
		}
	 } 
	for(int i = 0; i < lena - sum; i++)
	printf("%c", a[i]);
} 

void easyanswer(int lena, int lenb, char a[], char b[])
{
	int c[256]={0};
 	for(int k = 0; k < lenb; k++)
 	c[b[k]] = 1;
 	for(int k = 0; k < lena; k++)
 	if(!c[a[k]]) putchar(a[k]);
 	for(int i = 97; i < 123; i++)
 	{
 		printf("%d", c[i]);
	 }
// 	printf("%d",c[97]);
}
/*
int main()
{
	char a[10001],b[10001];
	gets(a); gets(b);
	int lena = strlen(a);
	int lenb = strlen(b);  
	int c[256];
 	for(int i = 0; i < lenb; i++)
 	c[b[i]] = 1;
 	for(int i = 0; i < lena; i++)
 	if(!c[a[i]]) putchar(a[i]);
 		for(int i = 97; i < 123; i++)
 	{
 		printf("%d", c[i]);
	 }

}*/






/*
void fun(int lena, int lenb, char a[], char b[])
{
	int c[256];
//	int lenc = strlen(c);
	for(int i = 0; i < lenb; i++)
	{c[b[i]] = 1;}
	
	for(int i = 0; i < lena; i++)
	{
//		printf("%d ",c[i]);
		if(!c[a[i]]) putchar(a[i]); 
	}
}
//	for(int i = 0; i < 256; i++)
	


int main()
{
	char a[10001],b[10001];
	gets(a); gets(b);
	int lena = strlen(a);
	int lenb = strlen(b);
	void fun(int lena, int lenb, char a[], char b[]);
	fun(lena, lenb, a, b);
}*/


	
