// Also I have to submit in cpp 17 format.


#include<bits/stdc++.h>
using namespace std;
void displayArr(int arr[] , int n ){ 
    for(int i = 0 ; i < n ; i++) cout<<arr[i]<<" ";
}
void solve(int arr[] , int n , int x){
    int ans = 0;
    // cout<<"hi"<<endl; 
    ans = max(ans, (arr[0] - 0)); // for first val to 0 as it might be very big.
    for(int i = 1 ; i < n ; i++){
        int temp = arr[i] - arr[i-1];
        ans = max(temp,ans);
    }
    ans = max(ans, 2*(x - arr[n-1]));// for last val to end .
    cout<<ans<<endl;
 
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t ;
    cin>>t;
    while(t--){
        int n , x;
        cin>>n>>x;
        int arr[n];
        for(int i = 0; i < n; i++) cin>>arr[i];
        solve(arr , n , x);
    
    
    }

}