/*
* https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays/0/
* MergeSortedArrays O(1) extra space
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void swap(int &a, int &b){
    a = a^b;
    b = a^b;
    a = a^b;
}

int main()
 {
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int arr1[n], arr2[m];
	    for(register int i = 0; i<n ; i++){
	        cin>>arr1[i];
	    }
	    for(register int i = 0; i<m ; i++){
	        cin>>arr2[i];
	    }
	    
	    int gap = n+m;
	    while(true){
	        gap = gap/2 + gap%2;
	        int i = 0, j = 0;
	        for( i = 0; (i+gap)<n ; i++){
	            if(arr1[i]>arr1[i+gap]){
	                swap(arr1[i], arr1[i+gap]);
	            }
	        }
	        
	        for(i, j = (gap > n)?gap-n:0; i<n && (j)<m ; i++, j++){
	            if(arr1[i]>arr2[j]){
	                swap(arr1[i], arr2[j]);
	            }
	        }
	        
	        if(j<m){
	            for(j=0; (j+gap)<m; j++){
    	            if(arr2[j]>arr2[j+gap]){
    	                swap(arr2[j], arr2[j+gap]);
    	            }
    	        }
	        }
	        if(gap==1)
	            break;
	    }
	    
	    for(register int i = 0; i<n; i++){
	        cout<<arr1[i]<<" ";
	    }
	    for(register int i = 0; i<m; i++){
	        cout<<arr2[i]<<" ";
	    }
	    cout<<"\n";
	    
	}
	return 0;
}
