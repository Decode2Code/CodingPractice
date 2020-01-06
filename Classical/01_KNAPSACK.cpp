/*
* https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem/0
* 0/1 KNAPSACK
*/
#include<iostream>

using namespace std;

int max(int a, int b) { return (a > b)? a : b; } 

int knapSack(int W, int wt[], int val[], int n) 
{ 
	int i, w; 
	int K[n+1][W+1]; 

	for (i = 0; i <= n; i++) 
	{ 
		for (w = 0; w <= W; w++) 
		{ 
			if (i==0 || w==0) 
				K[i][w] = 0; 
			else if (wt[i-1] <= w) 
					K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]], K[i-1][w]); 
			else
					K[i][w] = K[i-1][w]; 
		} 
	} 

	return K[n][W]; 
} 

int main() 
{ 
	int t;
	cin>>t;
	while(t--){
		int N, W;
		cin>>N>>W;
		int val[1005], wt[1005];
		
		for(register int i = 0;i<N; i++){
			cin>>val[i];
		}
		for(register int i = 0;i<N; i++){
			cin>>wt[i];
		}
		printf("%d\n", knapSack(W, wt, val, N));
	}
	return 0; 
} 

