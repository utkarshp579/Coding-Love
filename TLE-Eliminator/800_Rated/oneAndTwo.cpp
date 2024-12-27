// Also I have to submit in cpp 17 format.


#include<bits/stdc++.h>
using namespace std;
void displayArr(int arr[] , int n){ 
    for(int i = 0 ; i < n ; i++) cout<<arr[i]<<" ";
}
void solve(int arr[] ,int cnt2 , int n){
    if(cnt2 % 2 == 1) cout<<-1<<endl;
    else{
        // cout<<cnt2<<" ";
        cnt2 = cnt2 / 2;
        // cout<<cnt2<<" ";
        for(int i = 0 ; i < n ; i++){
            if(arr[i] == 2 ) cnt2--;
            // cout<<cnt2<<" ";
            if(cnt2 == 0) {
                cout<<i+1<<endl;
                return;
            }
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
        int cnt2 = 0;
        for (int i = 0; i < n; i++) {
            cin>>arr[i]; 
            if(arr[i] % 2 == 0) cnt2++;
        }   
        solve(arr, cnt2 , n);    
    }

}