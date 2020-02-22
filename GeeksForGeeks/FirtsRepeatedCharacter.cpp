/*
* https://practice.geeksforgeeks.org/problems/find-first-repeated-character/0
* first repeated character
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--){
         string s;
         cin>>s;
         bool arr[257]={0};
         int minIndex = 1;
         for(register int i=1;i<=s.length(); i++){
             char ch = s[i-1];
             if(arr[ch]==0)
                arr[ch]=1;
             else{
                 cout<<ch<<"\n";
                 minIndex = 0;
                 break;
             }
         }
         if(minIndex)
            cout<<"-1\n";
     }
	//code
	return 0;
}
