#include<stdio.h>
#include<string.h>
int main()
{
	int q[17] = {7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
	char m[11] = {'1','0','X','9','8','7','6','5','4','3','2'};
//	int m[11] = {1,0,10,9,8,7,6,5,4,3,2};
	int N, sum, count = 0, a;
	char n[100][20];
	scanf("%d",&N);
	for(int i = 0; i < N; i++)
	{
		scanf(" %s",&n[i]);
	//	gets(n[i]);
	}
	for(int i = 0; i < N; i++)
	{
		sum = 0;
		for(int j = 0; j < 17; j++)
		{
			if('0' <= n[i][j] && '9' >= n[i][j])
			{
				a = n[i][j] - '0';
				sum = sum + a * q[j];
			}
			else 
			{
				puts(n[i]);
				break;
			}
		}
		sum = sum%11;
		if(n[i][17] == m[sum]) count++;
		else puts(n[i]);
	}
	if(count == N) printf("All passed");
} 
