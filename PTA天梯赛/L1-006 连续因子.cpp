#include<bits/stdc++.h>
using namespace std;
vector<int>arr;
vector<int>length;
vector<int>start;
typedef long long int n;

int main()
{
	cin >> n;
	
	for(int i = 2; i < n; i++){
		if(n%i == 0){
			arr.push_back(i);
		}
	}
	
	for(int i = 0; i < arr.size(); i++){
		start.push_back(i);
		if(arr[i]+1 == arr[i+1]){
			length[i]++;
		}
	}
}
 
