/*
* https://practice.geeksforgeeks.org/problems/rightmost-different-bit/0
* RighmostDifferentBit
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
	    int a, b, num;
	    cin>>a>>b;
	    num = a^b;
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
