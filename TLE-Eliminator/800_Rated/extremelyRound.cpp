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
        int n ;
        cin>>n;
        int i = 1 , ans = 0;
        while(true){
            if( n / i > 0 && n / i < 10){
                ans += n / i;
                cout<<ans<<endl;
                break;
            }
            ans += 9;
            i *= 10;
        }
    }

}