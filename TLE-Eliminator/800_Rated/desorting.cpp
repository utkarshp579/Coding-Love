#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> &v , int n){
    int minDiff = INT_MAX;
    for(int i = 1; i < v.size();i++){
        minDiff = min(minDiff, v[i] - v[i - 1]);
    }
    // cout<<minDiff<<" min "<<endl;
    if(minDiff < 0) cout<<0<<endl;
    else cout<<minDiff/2 + 1<<endl;
}
int main(){
        #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t ;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        solve(v ,n);
    }
}