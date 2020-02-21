/*
* https://practice.geeksforgeeks.org/problems/flood-fill-algorithm/0
* Flood Fill algorithm
*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void floodFill(int arr[101][101], int i, int j, int n, int m, int c, int pC){
    if(i<0 || j<0 || i>=n || j>=m)
        return;
    if(arr[i][j]!=pC)
        return;
    
    arr[i][j] = c;
    
    floodFill(arr, i+1, j, n, m, c, pC);
    floodFill(arr, i-1, j, n, m, c, pC);
    floodFill(arr, i, j+1, n, m, c, pC);
    floodFill(arr, i, j-1, n, m, c, pC);
}

int main()
 {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m;
	    cin>>n>>m;
	    int arr[101][101]={0};
	    for(register int i=0;i<n; i++){
	        for(register int j=0;j<m;j++){
	            cin>>arr[i][j];
	        }
	    }
	    int x, y, c;
	    cin>>x>>y>>c;
	    if(arr[x][y]!=c)
	        floodFill(arr, x, y, n, m, c, arr[x][y]);
	    for(register int i=0;i<n; i++){
	        for(register int j=0;j<m;j++){
	            cout<<arr[i][j]<<" ";
	        }
	    }
	    cout<<"\n";
	}
	return 0;
}
