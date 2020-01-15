/*
* https://practice.geeksforgeeks.org/problems/missing-number-in-array/0
* MissingNumber
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
	    int solution =0;
	    for(register int i=0; i<n-1; i++){
	        int num;
	        cin>>num;
	        solution = solution ^ num;
	        solution = solution ^ i+1;
	    }
	    cout<<(solution^n)<<"\n";
	}
	return 0;
}
