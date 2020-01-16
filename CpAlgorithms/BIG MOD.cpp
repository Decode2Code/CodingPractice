/*
* https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=310
* BIG MOD
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long a, b, c;
	while(cin>>a>>b>>c){
		long long res = 1;
		while(b>0){
			if(b&1){
				res = res *a; res = res%c;
			}
			a = a*a; a=a%c;
			b=b>>1;
		}
		cout<<res<<"\n";
	}
	return 0;
}
