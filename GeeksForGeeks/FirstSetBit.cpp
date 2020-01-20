/*
* https://practice.geeksforgeeks.org/problems/find-first-set-bit/0#ExpectOP
* FirstSetBit
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
	    int count = 0;
	    while(num>0){
	        count++;
	        if(num&1)
	            break;
	        num = num>>1;
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
