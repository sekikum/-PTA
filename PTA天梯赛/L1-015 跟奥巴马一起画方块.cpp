#include<stdio.h>
int main()
{
	int n;
	char c;
	scanf("%d",&n);
	scanf(" %c",&c);  //%c֮ǰ�ӿո񣬳�����ȷ 
	for(int i = 0; i < (n+1)/2; i++)
	{
		for(int j = 0; j < n; j++)
		{
			putchar(c);
		}
		if(i < (n+1)/2-1) printf("\n");
	}
	return 0;
}
