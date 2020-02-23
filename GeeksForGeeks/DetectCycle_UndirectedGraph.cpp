/*
* This is a function problem. You can test the solution on the link below
* https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1/
* Check cycle in an Un-directed graph
*/

bool cyclicCheck(vector<int> adj[], int V, int i, vector<int> &visited, int parent, int color){
    if(visited[i] != -1)
      return false;
    visited[i]=color;
    for(register int j=0; j<adj[i].size(); j++){
        if(visited[adj[i][j]]==color){
            if(adj[i][j]!=parent)
                return true;
        }
        else{
            bool temp = cyclicCheck(adj, V, adj[i][j], visited, i, color);  
            if(temp)
                return true;
        }
    }
    return false;
}

bool isCyclic(vector<int> adj[], int V)
{
   // Your code here
   bool cycle = false;
   vector<int> visited(V, -1);
   for(register int i = 0; i<V; i++){
       if(visited[i]==-1){
           bool tCycle = cyclicCheck(adj, V, i, visited, -1, i);
           if(tCycle)
            return true;
       }
   }
   return cycle;
   
}
