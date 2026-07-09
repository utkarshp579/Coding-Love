#include<iostream>
#include<vector>
#include<queue>
using namespace std;
// prims is for undirected, cyclic not matters , negative weights , not mater.

typedef pair<int, int> pii; // { weight , Node}

// for dense graph :- ElogV
int prims(int n , vector<vector<pii>> &adj){ 
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    vector<bool> visited(n, false);
    vector<int> minDist(n , INT_MAX); //! Optimization as it helps us to pushing only better competent nodes.

    int mstWt = 0;

    // start from node 0 : { weight , node } // for 0 based Indexing
    pq.push({0 , 0}) ;  // we will not mark visited here , as because priorityQueue is containing candidature nodes with weights from processed nodes
    minDist[0] = 0;
    int count = 0; 

    while(!pq.empty()){
        auto [w , u] = pq.top();
        pq.pop();

        if(visited[u]) // do nothing , as we have poped this.
            continue;
        visited[u] = true;
        count++;
        mstWt += w;

        for(auto & edge : adj[u]){
            int v = edge.first;
            int wt = edge.second;

            if(!visited[v] && wt < minDist[v]){
                pq.push({wt, v});
                minDist[v] = wt;
            }
        }

    }
    if(count != n) // as in MST there are N nodes and n - 1 edges
        return -1; 

    return mstWt;
}