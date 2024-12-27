// Also I have to submit in cpp 17 format.


#include<bits/stdc++.h>
using namespace std;
void displayArr(int arr[] , int n){ 
    for(int i = 0 ; i < n ; i++) cout<<arr[i]<<" ";
}
void solve(int arr[] , int n){
    
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);
    #endif

    int t ;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin>>arr[i];

        int ans = -1e9 - 7 ;
        for(int i = 0 ; i < n ; i++){
            if(i != 0){
                ans = max(ans , arr[i] - arr[0]);
            }
            if(i != n - 1){
                ans = max(ans , arr[n -1] - arr[i]);
            }
                ans = max(ans, arr[(i - 1 + n) % n] - arr[i]);
        }    
        cout<<ans<<endl;
    
    }

}