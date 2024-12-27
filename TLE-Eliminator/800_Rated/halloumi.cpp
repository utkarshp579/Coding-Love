// Also I have to submit in cpp 17 format.
// k >= 2 YES

// k == 1
// Need to check.


#include<bits/stdc++.h>
using namespace std;
void displayArr(int arr[] , int n){ 
    for(int i = 0 ; i < n ; i++) cout<<arr[i]<<" ";
}
void solve(int arr[] , int n , int k){
    if(k > 1){
        cout<<"YES"<<endl;
        return;
    }
    for(int i = 1 ; i < n ; i++){
        if(arr[i] < arr[i - 1]){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
    
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t ;
    cin>>t;
    while(t--){
        int n , k;
        cin>>n>>k;
        int arr[n];
        for(int i = 0 ; i < n ; i++) cin>>arr[i];
        solve(arr , n , k);
    
    
    }

}