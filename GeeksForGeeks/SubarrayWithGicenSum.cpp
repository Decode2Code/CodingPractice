/*
* https://practice.geeksforgeeks.org/problems/subarray-with-given-sum/0
* Subarray With Given Sum
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
	    long long sum = 0;
	    cin>>n>>sum;
	    int arr[n];
	    int start = -1; 
	    int end = -1;
	    int curr_start = 0, curr_sum = 0;
	    for(register int i = 0; i<n; i++){
	        cin>>arr[i];
	    }
	    for(register int i = 0; i<n; i++){
	        curr_sum = curr_sum + arr[i];
	        while(curr_sum > sum){
	            curr_sum = curr_sum - arr[curr_start];
	            curr_start++;
	        }
	        if(curr_sum == sum){
	            start = curr_start;
	            end = i;
	            break;
	        }
	    }
	    if(end==-1){
	        cout<<-1<<endl;
	    }
	    else{
	        cout<<start+1<<" "<<end+1<<"\n";
	    }
	}
	return 0;
}
