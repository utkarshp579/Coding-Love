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
        int a , b , c , d;
        cin>>a>>b>>c>>d;
        int ans = 0;
        ans += ( d - b);
        if( ans < 0) cout<<-1<<endl;
        else{
            a += ans;
            if(a - c >= 0) {
                ans += (a - c);
                cout<<ans<<endl;
            }
            else cout<<-1<<endl;
        }    
    
    }

}