/*
* http://www.spoj.com/problems/AGGRCOW/
* AGGRCOW
*/

#include <iostream>
#include<bits/stdc++.h>

using namespace std;

//arr -> stall location, n -> num of stall, c-> cows, d-> distance (min)
bool possible(int arr[], int n, int c, int d){
	int cows = 1;
	int pos = arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]-pos>=d){
			cows++;
			pos = arr[i];
		}
		if(cows>=c)
		return true;
	}
	return false;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
		int n,c;
		cin>>n>>c;
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		
		
		sort(arr,arr+n);
		
		int solution = 0;
		int min_d = 0;
		int max_d = arr[n-1] - arr[0];
		
		while(max_d>=min_d){
			int mid_d = (max_d-min_d)/2 + min_d;
			if(possible(arr,n,c,mid_d)){
				solution = max(mid_d, solution);
				min_d = mid_d +1;
			}
			else{
				max_d = mid_d-1;
			}
		}
		
		cout<<solution<<endl;
	}
	return 0;
}
