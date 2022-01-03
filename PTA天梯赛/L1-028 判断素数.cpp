#include<stdio.h>
#include<math.h>

bool PrimeNumber(int m)		//PTA不认识bool,如提交需更改为int 
{
	if(m == 1) return 0;
	else for(int j = 2; j <= sqrt(m); j++){
		if(m % j == 0) return 0;
	}
	return 1;
}

int main()
{
	int n, a[10] = {0};
	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++){
		if(PrimeNumber(a[i])) printf("Yes");
		else printf("No");
		if(i != n-1) printf("\n");
	}
} 
