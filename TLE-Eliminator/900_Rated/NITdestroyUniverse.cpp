// Also I have to submit in cpp 17 format.
// count the number nonzero subarray

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
        // vector<int> arr(n);
        bool flag = false;
        int ans = 0 , cnt = 0 , temp;
        for (int i = 0; i < n; i++) {
            cin>>temp;
            if(temp == 0 ){
                flag = false;
            }
            else if(flag == false){
                ans++;
                flag = true;
            }
        }    
        cout<< (ans > 1 ? 2 : ans)<<"\n";
    
    }

}