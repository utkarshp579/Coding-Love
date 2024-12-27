// Also I have to submit in cpp 17 format.


#include<bits/stdc++.h>
using namespace std;
void displayArr(int arr[] , int n){ 
    for(int i = 0 ; i < n ; i++) cout<<arr[i]<<" ";
}
void solve(int arr[] , int n){
    unordered_map<int , int> mp;
    for(int i = 0 ; i < n ; i++){
        mp[arr[i]]++;
    }
    // cout<<"size is "<<mp.size()<<endl;
    if(mp.size() > 2) cout<<"No\n";
    if(mp.size() == 1) cout<<"Yes\n";
    if(mp.size() == 2){
        bool flag = true;
        int a , b;
        for(auto it : mp){
            if(flag){
                a = it.second;
                flag = false;
            }else{
                b = it.second;
                if(a==b || abs(a-b) == 1) {
                    cout<<"Yes\n";
                    return;
                }
            }
        }
        cout<<"No\n";
    }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t ;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++) cin>>arr[i];    
        solve(arr, n);
    }

}