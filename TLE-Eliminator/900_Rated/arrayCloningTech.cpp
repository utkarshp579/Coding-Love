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
        unordered_map<int,int> mp;
        int maxi = 0;
        // vector<int> arr(n);
        int temp;
        for (int i = 0; i < n; i++) {
            cin>>temp;
            mp[temp]++;
            maxi = max(maxi,mp[temp]);
        }   
        // cout<<"maxi = "<<maxi<<endl;
        // if(maxi == n){
        //     cout<<0<<endl;
        //     continue;
        // }
        // int i = 1 , hlp = maxi;
        // int ans = 0;
        // while(true){

        // aise kuch neeche kabhi krna ho so you could use min ,         //     int needed = n - hlp;
        //     if(needed >= (1 + hlp)){
        //         ans += (1 + hlp);
        //     }
        //     else{
        //         ans += 1 + needed;  
        //         cout<<ans<<"\n";
        //         break;
        //     }
        //     // cout<<ans<<" ";
        //     hlp *= 2;
        // }
        // cout<<endl;

        int ans = 0;
        while (maxi < n) {
            int d = min(n - maxi, maxi);
            ans += 1 + d;// calculating ans
            maxi += d;// something multiply by 2
        }
        cout << ans << '\n';
    
    }

}