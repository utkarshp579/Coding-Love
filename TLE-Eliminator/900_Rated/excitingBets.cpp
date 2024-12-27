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
        long long a , b ;
        cin>>a>>b;
        if(a == b){
            cout<<0<<" "<<0<<endl;
            continue;
        }
        long long ans = abs(a - b);
        long long opr = min(a % ans , ans - a % ans);
        cout<<ans<<" "<<opr<<endl;
    }

}