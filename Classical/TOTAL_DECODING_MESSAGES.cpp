/*
* https://practice.geeksforgeeks.org/problems/total-decoding-messages/0
* Total Decoding Messages
*/

#include<bits/stdc++.h>

using namespace std;

int countWays(string num, int index){
    
    //cout<<index<<endl;
    if(index<0)
    return 1;
    
    if(index==0 && num[index]!='0')
        return 1;
    
    if(index==0 && num[index]!='0')
        return 0;
        
    if(num[index]=='0'  && index>=1 && (num[index-1]=='2' || num[index-1]=='1'))
    return countWays(num,index-2);
    
    if((num[index]!='0') && index>=1 &&  ((num[index-1]=='2' && num[index]<='6') || num[index-1]=='1')){
    	return countWays(num,index-2)+countWays(num,index-1);
	}
    
    if((num[index]!='0') && index>=1 && ((num[index-1]=='2' && num[index]>'6') || num[index-1]>'2')){
    	return countWays(num,index-1);
	}
	
	if((num[index]!='0') && (num[index-1]=='0')){
    	return countWays(num,index-1);
	}
	return 0;
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    string n;
	    cin>>n;
	    int sol = countWays(n,n.length()-1);
	    
	    cout<<sol<<endl;
	}
	return 0;
}
