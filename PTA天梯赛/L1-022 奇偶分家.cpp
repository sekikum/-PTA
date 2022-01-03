#include<stdio.h>
int main()
{
	int N, n[1001], a = 0, b = 0;
	scanf("%d", &N);
	for(int i = 0; i < N; i++)
	{
		scanf("%d", &n[i]);
		if(n[i]%2 == 0) a++;
		else b++;
	}
	printf("%d %d", b, a); 
} 
