#include<stdio.h>
#include<math.h>
/*
int main()
{
    int n,x;
    scanf("%d",&n);
    x = pow(2,n);
    printf("%d",x);
}*/
int main()
{
	int n,x = 1;
    scanf("%d",&n);
    while(n--)
    {
    	x = 2*x;
	}
	printf("2^%d = %d",n,x);
}
