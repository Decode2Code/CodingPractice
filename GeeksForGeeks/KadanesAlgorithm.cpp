/*
* https://practice.geeksforgeeks.org/problems/kadanes-algorithm/0
* Kadane's Algorithm
*/
#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(register int i = 0; i<n; i++){
	        cin>>arr[i];
	    }
	    long long curr_max = INT_MIN;
	    long long curr_sum = 0;
	    
	    for(register int i = 0; i<n; i++){
	        curr_sum = curr_sum + arr[i];
	        if(curr_sum>curr_max){
	            curr_max = curr_sum;
	        }
	        if(curr_sum<0){
	            curr_sum = 0;
	        }
	    }
	    cout<<curr_max<<"\n";
	}
	return 0;
}
