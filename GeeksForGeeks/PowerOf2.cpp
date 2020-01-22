/*
* https://practice.geeksforgeeks.org/problems/power-of-2/0
* PowerOf2
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
	    long long num;
	    cin>>num;
	    if((num) && (num&(num-1))==0)
	        cout<<"YES\n";
	    else
	        cout<<"NO\n";
	}
	return 0;
}
