#include<stdio.h>
#include<string.h>
int main()
{
	char n[50];
	scanf("%s", n);
	double sum, count = 0, a = 1, b = 1;
	int len;
	len = strlen(n); 
	for(int i = 0; i < len; i++)
	{
		if(n[i] == '2') count++;
	}
	if((n[len] - '0')%2 == 0) b = 2;
	if(n[0] == '-')
	{
		a = 1.5;
		len = len-1;
	} 	
	sum = (double)100*count*a*b/len;
	printf("%.2f%%",sum);
}
