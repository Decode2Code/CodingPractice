/*
* http://www.spoj.com/problems/COINS/
* COINS - Bytelandian gold coins
*/

#include <bits/stdc++.h>

using namespace std;

unordered_map<long long , long long > byteLandianExchange;

long long  exchange(long long  coins){
	
	if(coins<=0)
		return 0;
		
	if(byteLandianExchange.find(coins)!=byteLandianExchange.end())
		return byteLandianExchange[coins];
	
	long long  value=coins;
	long long  exchangeValue = exchange(coins/2)+ exchange(coins/3)+ exchange(coins/4);
	
	if(exchangeValue>value)
	    value=exchangeValue;
	return byteLandianExchange[coins]=value;
}

int main(){
	long long  coins;
	while(cin>>coins){
		cout<<exchange(coins)<<"\n";
	}
}

