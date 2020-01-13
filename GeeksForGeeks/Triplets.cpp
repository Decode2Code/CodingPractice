/*
* https://practice.geeksforgeeks.org/problems/count-the-triplets/0
* Triplets
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
	    vector<int> arr(n);
	    for(register int i = 0; i<n ; i++){
	        cin>>arr[i];
	    }
	    sort(arr.begin(), arr.end());
	    int count = 0;
	    for(register int i = n-1; i>=2; i--){
	        int low = 0;
	        int high = i-1;
	        while(low<high){
	            if((arr[low] + arr[high])==arr[i]){
	                count++; low++; high--;
	            }
	            else if((arr[low]+arr[high])<arr[i]){
	                low++;
	            }
	            else{
	                high--;
	            }
	        }
	    }
	    if(count==0)
	        cout<<"-1\n";
	    else
	        cout<<count<<"\n";
	}
	return 0;
}
