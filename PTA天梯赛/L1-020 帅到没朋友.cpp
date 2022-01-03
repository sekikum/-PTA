#include<stdio.h>
int main()
{
	int n, q[101] = {0}, f[101][1001] = {0}, count = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &q[i]);
		for(int j = 0; j < q[i]; j++)
		{
			scanf("%d", &f[i][j]);
		}
	}
	int m, ID[10001] = {0}, a[10001] = {0}, b[100000] = {0}, k = 0;
	scanf("%d", &m);
	for(int b = 0; b < m; b++)
	{
		scanf("%d", &ID[b]);
	}
	for(int i = 0; i < m; i++)
	for(int j = i+1; j < m; j++)
	{
		if(ID[i] == ID[j])
		{
			
			for(; j < m - 1; j++)
			ID[j] = ID[j+1];
			m--;
		}
	}
	for(int i = 0; i < n; i++)
	for(int j = 0; j < q[i]; j++)
	{
		b[k] = f[i][j];
		k++;
	}
	for(int i = 0; i < m; i++)
	for(int j = 0; j < k; j++)
	{
		if(ID[i] == b[j]) 
		{
			a[i] = 1;
			count++;
		}
	}
	for(int i = 0; i < m; i++)
	{
		if(a[i] != 1) printf("%d ", ID[i]);
	}
	if(count-1 == m) printf("No one is handsome");
}
