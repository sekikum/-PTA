#include<stdio.h>
int main()
{
	int N, a[10] = {1}, S = 0;
	scanf("%d",&N);
	for(int i = 1; i < N; i++)
	{
		a[i] = a[i-1]*(i+1);
		S = S + a[i];
	}
	printf("%d",S+1);
}
