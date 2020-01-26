/*
* https://practice.geeksforgeeks.org/problems/bit-difference/0
* Bit difference
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
	    int a, b;
	    cin>>a>>b;
	    int num = a^b;
	    int count = 0;
	    while(num){
	        count++;
	        num = num & (num-1);
	    }
	    cout<<count<<endl;
	}
	return 0;
}
