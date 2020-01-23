/*
* https://practice.geeksforgeeks.org/problems/toggle-bits-given-range/0
* ToggleBits
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
	    int num;
	    cin>>num;
	    int l, r;
	    cin>>r>>l;
	    int digits = l-r+1;
	    int mask = ((1<<digits)-1)<<(r-1);
	    num = num ^ mask;
	    cout<<num<<"\n";
	}
	return 0;
}
