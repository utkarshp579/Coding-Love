// Also I have to submit in cpp 17 format.


#include<bits/stdc++.h>
using namespace std;
void displayArr(int arr[] , int n){ 
    for(int i = 0 ; i < n ; i++) cout<<arr[i]<<" ";
}
void solve(int arr[] ,int n){
    for(int i = 1 ; i < n - 1 ; i++){
        if(arr[i] > arr[i - 1] && arr[i] < arr[i + 1] ){
            swap(arr[i],arr[i + 1]);
        }
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
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        // solve(arr , n);
        if(arr[0] == 1) cout<<"Yes\n";
        else cout<<"No\n";
    }

}