/*
* https://practice.geeksforgeeks.org/problems/pythagorean-triplet/0
* PythagoreanTriplet
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
	    int arr[1001]={0};
	    for(register int i = 0;i<n; i++){
	        int num ;
	        cin>>num;
	        arr[num]++;
	    }
	    bool found = false;
	    for(register int i = 2; i<1001; i++){
	        if(arr[i]==0)
	            continue;
	        int low = 1; 
	        int high = i-1;
	        int numSq = i*i;
	        while(low<high){
	            if(arr[low]==0){
	                low++;
	            }
	            else if(arr[high]==0){
	                high--;
	            }
	            else{
	                
	                int sq_sum = low*low + high*high;
	                
	                if(numSq > sq_sum)
	                    low++;
	                else if (numSq < sq_sum)
	                    high--;
	                else{
	                    found = true;
	                    break;
	                   }
	            }
	           if(found == true)
	                break;
	        }
	        
	    }
	    if(found){
	            cout<<"Yes\n";
	    }
	    else{
	           cout<<"No\n";
	    }
	}
	return 0;
}
