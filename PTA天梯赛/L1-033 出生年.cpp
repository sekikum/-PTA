#include<stdio.h>
#include<string.h>

int SameNumber(int a[], int *flag)
{
	int count = 0, sum = 0;
	*flag = 4;
	for(int k = 0; k < 10; k++){
		for(int i = 0; i < 4; i++){
			if(a[i] == k) count++;
		}
		sum += count;
		if(count == 2) flag--;
		if(count == 3) *flag = 2;
		if(sum == 4) break;
	}
}

int main()
{
	int y, n, a[4], m1, m2, flag = 0;
	scanf("%d %d", &y, &n);
	m1 = y;
	m2 = y;
	do{		
		for(int i = 3; i >= 0; i--){
			a[i] = y%10;
			y /= 10;
		}
		SameNumber(a, &flag);
		m1++;
	}while(n != flag);
	printf("%d %d", m1 - 1 - m2, m1 - 1);
	printf("\n%d", flag);
}
