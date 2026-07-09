    #include<iostream>
    #include<vector>
    #include<sort>
    using namespace std; 

    class DSU{
        vector<int> rank, parent, size;
    public:
        DSU(int n){
            // A single node has a rank of 0 (height 0).
            // rank.resize(n, 1), size.resize(n, 1) , parent.resize(n , 0);// standard practice is to initialize rank by 0. as rank is height - 1
            rank.resize(n, 0), size.resize(n, 1) , parent.resize(n , 0);
            for (int i = 0; i < n ; i++)
                parent[i] = i;
        }

        int findParent(int x){
            if(parent[x] != x){
                parent[x] = findParent(parent[x]);
            }
            return parent[x];
        }

        bool uniteByRank(int x , int y){
            int parX = findParent(x), parY = findParent(y);
            if(parX == parY)
                return false; 
            
            if(rank[parX] < rank[parY]){
                parent[parX] = parY;
            }
            else if(rank[parY] < rank[parX]){
                parent[parY] = parX;
            }else{
                parent[parY] = parX;
                // parX++; // BUG. We not have to increment temporary value of parent of X , instead we have to go to rank of parent of X and increment
                rank[parX]++;
            }
            return true;
        }

        bool uniteBySize(int x , int y){
            int parX = findParent(x), parY = findParent(y);
            if(parX == parY)
                return false;
            
            if(size[parX] < size[parY]){
                parent[parX] = parY;
                // size[parY] += parX; // we not have to add parents value , instead we have to add size to size
                size[parY] += size[parX];
            }else{
                parent[parY] = parX;
                // size[parX] += parY; // we not have to add parent into size , instead add size into size.
                size[parX] += size[parY];
            }

            return true;
        }
    };

class Kruskal{
public:

    int MST(int n, vector<vector<int>> &edges) {
        // edges = {u , v , w};
        sort(edges.begin(), edges.end(), [](auto &a, auto &b)
             { return a[2] < b[2]; });

        DSU dsu(n);
        int mstCost = 0;
        int edgesUsed = 0;

        for(auto &e : edges){
            int u = e[0], v = e[1], w = e[2];
            if(dsu.unite(u , v)){
                mstCost += w;
                edgesUsed++;
                if(edgesUsed == n - 1)
                    break;
            }
        }

        // this is for checking is the graph is connected. because for disconnected component , instead of MST something else will be returned. 
        if(edgesUsed != n - 1)
            return -1;

        return mstCost;
    }; 
}

// for 1 based indexing , either reduces the edges while pushing to make it zero based. or change DSU for 1 based. 