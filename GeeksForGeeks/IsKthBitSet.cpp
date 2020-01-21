/*
* https://practice.geeksforgeeks.org/problems/check-whether-k-th-bit-is-set-or-not/0
* KthBitSet
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
	    int n,k;
	    cin>>n>>k;
	    if(n&(1<<k)){
	        cout<<"Yes\n";
	    }
	    else{
	        cout<<"No\n";
	    }
	}
	return 0;
}
