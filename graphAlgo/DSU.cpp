class DSU {
    vector<int> parent, rank, size;

public:
    DSU(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        size.resize(n, 1);

        for (int i = 0; i < n; i++)
            parent[i] = i;
    }

    int find(int x) {
        if (x != parent[x])
            parent[x] = find(parent[x]);
        return parent[x];
    }

    bool uniteByRank(int u, int v) {
        int pu = find(u), pv = find(v);
        if (pu == pv) return false;

        if (rank[pu] < rank[pv]) {
            parent[pu] = pv;
        } else if (rank[pv] < rank[pu]) {
            parent[pv] = pu;
        } else {
            parent[pv] = pu;
            rank[pu]++;
        }
        return true;
    }

    bool uniteBySize(int u, int v) {
        int pu = find(u), pv = find(v);
        if (pu == pv) return false;

        if (size[pu] < size[pv]) {
            parent[pu] = pv;
            size[pv] += size[pu];
        } else {
            parent[pv] = pu;
            size[pu] += size[pv];
        }
        return true;
    }
};


class DSU2 {
    vector<int> parent, rank, size;

public:
    DSU2(int n) {
        parent.resize(n + 1);
        rank.resize(n + 1, 0);
        size.resize(n + 1, 1);

        for (int i = 1; i <= n; i++)
            parent[i] = i;
    }

    int find(int x) {
        if (x != parent[x])
            parent[x] = find(parent[x]);
        return parent[x];
    }

    bool uniteByRank(int u, int v) {
        int pu = find(u), pv = find(v);
        if (pu == pv) return false;

        if (rank[pu] < rank[pv]) {
            parent[pu] = pv;
        } else if (rank[pv] < rank[pu]) {
            parent[pv] = pu;
        } else {
            parent[pv] = pu;
            rank[pu]++;
        }
        return true;
    }

    bool uniteBySize(int u, int v) {
        int pu = find(u), pv = find(v);
        if (pu == pv) return false;

        if (size[pu] < size[pv]) {
            parent[pu] = pv;
            size[pv] += size[pu];
        } else {
            parent[pv] = pu;
            size[pu] += size[pv];
        }
        return true;
    }
};