/*
* https://practice.geeksforgeeks.org/problems/set-kth-bit/0
* set kth bit
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
 {
	//code
	register int t;
	cin>>t;
	while(t--){
	    int num, k;
	    cin>>num>>k;
	    cout<<int(num | (1<<k))<<"\n";
	}
	return 0;
}
