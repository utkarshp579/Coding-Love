#include<iostream>
#include<vector>
#include<climits>
using namespace std;
// if n is power of 2 , then segment tree will be complete binary tree.
class SegmentTree{
    vector<int> seg;
public:
    SegmentTree(int n){
        seg.resize(n * 4 + 1);
    }
    void build(int ind , int low , int high , vector<int>&arr){
        if(low == high) {
            seg[ind] = arr[low];
            return;
        }

        int mid = (low + high)/2;
        build(2 * ind + 1, low, mid, arr);
        build(2 * ind + 2, mid + 1, high, arr);

        seg[ind] = min(seg[2 * ind + 1], seg[2 * ind + 2]);
    }

    int query(int ind , int low , int high , int l , int r ){ // l r is fixed, we need to compute our answer for that. 
        // no overlap
            // l r low high or low high l r
        if(r < low || l > high)
            return INT_MAX;

        // complete overlap
            // l lowhigh r
        if(low >= l && high <= r)
            return seg[ind];

        int mid = (low + high) >> 1;
        int left = query(ind * 2 + 1, low, mid, l, r);
        int right = query(ind * 2 + 2, mid + 1, high, l, r);

        return min(left, right);
    }

    void update(int ind, int low , int high , int i , int val ){
        if(low == high){
            seg[ind] = val; // in array I have update while callling the query
            return; 
        }

        int mid = (low + high) >> 1; 
        if(i <= mid)
            update(2 * ind + 1, low, mid, i, val);
        else
            update(2 * ind + 2, mid + 1, high, i, val);

        seg[ind] = min(seg[2 * ind + 1], seg[2 * ind + 2]);
    }
};


void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    SegmentTree sg1(n);
    sg1.build(0, 0, n - 1, arr);
    for (int j = 0; j < q; ++j) {
        string type;
        cin >> type;
        if (type == "query") {
            int l, r;
            cin >> l >> r;
            // assuming 0-based indexing, query in [l, r]
            cout << sg1.query(0, 0, n - 1, l, r) << endl;
        } else if (type == "update") {
            int idx, val;
            cin >> idx >> val;
            sg1.update(0, 0, n - 1, idx, val);
        }
    }
}

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cout << "Hi";
    solve();
    cout << "Hi";
    return 0;
}