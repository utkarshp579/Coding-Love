// Also I have to submit in cpp 17 format.


#include<bits/stdc++.h>
using namespace std;
void displayArr(int arr[] , int n){ 

    // for(int i = 0 ; i < n - 1 ; i++){

    // }

    cout<<"yes"<<endl;
    cout<<arr[n - 1]<<" ";
    for(int i = 0 ; i < n - 1 ; i++) cout<<arr[i]<<" ";
    cout<<endl;
}
void solve(int arr[] , int n){
    
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

        sort(arr , arr+n );
        if(arr[0] == arr[n - 1]) cout<<"NO"<<endl;
        else displayArr(arr , n);
    }

}