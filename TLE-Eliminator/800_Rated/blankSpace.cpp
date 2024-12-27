// Also I have to submit in cpp 17 format.


#include<bits/stdc++.h>
using namespace std;
void displayArr(int arr[] , int n){ 
    for(int i = 0 ; i < n ; i++) cout<<arr[i]<<" ";
}
void solve(int arr[] , int n){
    int ans = 0 , curr = 0;

    for(int i = 0 ; i < n ; i++){
        if(arr[i] == 0) curr++;
        else curr = 0;
        ans = max(ans, curr);
    }

    cout<<ans<<endl;
    return;

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
        solve(arr,n);
    }

}