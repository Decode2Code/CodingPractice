/*
* https://community.topcoder.com/stat?c=problem_statement&pm=1901&rd=4650
* FairWorkload
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class FairWorkload{
	public:
    
    int isPossible(vector<int> folders, int workers, int maxFiles){
    	int fileCount = 0;
        int workerCount = 0;
        
        for(register int i=0; i<folders.size(); i++){
        	int currFileCount = fileCount + folders[i];
            if(currFileCount>maxFiles){
            	workerCount++;
                fileCount = 0;
                i--;
                
                if(workerCount>=workers)
                    return false;
            }
            else{
            	fileCount = currFileCount;
            }
        }
        return true;
    }
    
    int getMostWork(vector<int> folders, int workers){
        int totalFiles = 0;
        for(register int i=0; i<folders.size(); i++){
        	totalFiles+=folders[i];
        }
        
        int low = 0; 
        int high = totalFiles;
        
        int solution = high;
        
        while(low<=high){
        	int mid = (low+high)/2;
            if(isPossible(folders, workers, mid)){
            	solution = min(solution, mid);
                high = mid-1;
            }
            else{
            	low = mid+1;
            }
        }
        return solution;
    }
};
