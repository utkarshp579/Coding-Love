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
    freopen("output.txt", "w", stdout);
    #endif

    int t ;
    cin>>t;
    while(t--){
        int n , k;
        cin>>n>>k;
        string s;
        cin>>s;
        int arr[26] = {0};
        for(int i = 0 ; i < n ; i++ ){
            arr[s[i] - 'a']++;
        } 
        int odd = 0;
        for(int i = 0 ; i < 26  ; i++){
            // cout<<arr[i]<<" "<<i<<endl;
            if( arr[i] % 2 ){
                odd++;
                // cout<<arr[i]<<" "<<odd<<endl;
            }
        }
        // cout<<k<<" "<<odd<<endl;
        if( k >= odd - 1) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
        cout<<endl;
    }

}