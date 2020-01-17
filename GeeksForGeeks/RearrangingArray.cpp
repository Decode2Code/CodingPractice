/*
* https://practice.geeksforgeeks.org/problems/-rearrange-array-alternately/0/
* RearrangingArray
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
	    long long arr[n];
	    for(register int i = 0; i<n;i++){
	        cin>>arr[i];
	    }
	    long long maxVal = arr[n-1]+1;
	    for(register int i = 0; i<n; i++){
	        if((i%2)==0){
	            int index = n-1 - i/2;
	            long long val = arr[index]%maxVal;
	            arr[i] = val*maxVal + arr[i];
	        }   
	        else{
	            int index = (i-1)/2;
	            long long val = arr[index]%maxVal;
	            arr[i] = val*maxVal + arr[i];
	        }
	    }
	    for(register int i = 0; i<n;i++){
	        cout<<(arr[i])/maxVal<<" ";
	    }
	    cout<<"\n";
	    
	}
	return 0;
}
