/*
* https://www.spoj.com/problems/LASTDIG/
* LASTDIG - The last digit
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
		
		int a, b;
		cin>>a>>b;
		a = a%10;
		int res = 1;
		if(a==0){
			cout<<a<<"\n";continue;
		}
		if(a==1){
			cout<<a<<"\n";continue;
		}
		if(b==1){
			cout<<a<<"\n";continue;
		}
		if(b==0){
			cout<<1<<"\n";continue;
		}
		
		while(b>0){
			if(b&1){
				res = res * a; res = res%10;
			}
			a = a*a; a = a%10;
			b = b>>1;
		}
		cout<<res<<"\n";
	}
	return 0;
}
