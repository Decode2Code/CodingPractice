/*
* https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=3671
* 1230 - MODEX
*/

#include <iostream>

using namespace std;

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		
		long long x, y, n;
		cin>>x>>y>>n;
		
		if(x==1 || x==0 || y==1){
			cout<<x<<"\n"; continue;
		}
		if(y==0){
			cout<<1<<"\n"; continue;
		}
		
		long long result = 1;
		
		while(y>0){
			if(y&1){
				result = result * x; result = result%n;
			}
			x = x*x; x = x%n;
			y = y>>1;
		}
		
		cout<<result<<"\n";
	}
}
