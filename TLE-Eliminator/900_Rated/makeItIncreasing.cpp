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
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin>>arr[i];    

        int ans = 0;
        int i = n - 2;
        while(i >= 0){
            while(arr[i] >= arr[i+1] && arr[i] > 0 ){
                arr[i] /= 2;
                ans++;
                // cout<<ans<<" "<<arr[i]<<endl;
            }
            if(arr[i] == arr[i+1]) {
                cout<<-1<<endl;
                break;
            }
           i--;
        }
        if(i == -1) cout<<ans<<endl;
    }

}

//' 5 0 , on this test case it fails
// int i = n - 2;
        // while(i >= 0){
        //     while(arr[i] >= arr[i+1]){
        //         arr[i] /= 2;
        //         ans++;
        //     }
        //     if(arr[i] == 0 && i != 0) {
        //         // cout<<-1<<endl;
        //         break;
        //     }
        //    i--;
        // }
        // // cout<<i<<" i\n";
        // cout<<( i > 0 ? -1 : ans) << endl;