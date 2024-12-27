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
        long long n ;
        cin>>n;
        int ans = 0;
        if(n % 2 || n == 2  ) cout<<"-1\n";
        else if(n % 4 && n % 6){
            n -= 10;
            ans += 2;
        }
        // cout<<n<<"\n";
        if((n % 4 == 0 && n %6 == 0)) {
            cout<<n/6 + ans<<" "<<n/4 + ans<<"\n";
            
        }else if(n % 4 == 0 && n % 6){
            cout<<(n / 12) * 2 + (n % 12)/4 + ans <<" "<<n/4 + ans <<"\n";
        }else if(n % 4 && n % 6 == 0 ){
            cout<<n/6 + ans<<" "<<(n / 12) * 3 + (n % 12)/6 + ans<<"\n";
        }
    
    }

}