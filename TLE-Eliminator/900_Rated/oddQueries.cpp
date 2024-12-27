// Also I have to submit in cpp 17 format.


#include<bits/stdc++.h>
using namespace std;
void displayArr(int arr[] , int n){ 
    for(int i = 0 ; i < n ; i++) cout<<arr[i]<<" ";
}
void solve(int l, int r, int k, const vector<int>& pre, int totalSumOddorEven) {
    int noOfOdd = pre[r] - (l > 0 ? pre[l - 1] : 0);
    noOfOdd %= 2;

    int effect = (k % 2) * ((r - l + 1) % 2);

    if ((effect + noOfOdd) % 2) {
        cout << (totalSumOddorEven ? "No" : "Yes") << endl;
    } else {
        cout << (totalSumOddorEven ? "Yes" : "No") << endl;
    }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);
    #endif
    int t ;
    cin>>t;
    while(t--){
          int n, q;
        cin >> n >> q;
        
        vector<int> pre(n);
        int pree = 0;
        
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            pree += (temp % 2);
            pre[i] = pree;
        }

        pree %= 2;
        
        while (q--) {
            int l, r, k;
            cin >> l >> r >> k;
            solve(l - 1, r - 1, k, pre, pree);
        }
    }

}