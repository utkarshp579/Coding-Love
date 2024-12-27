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
        int n , k ;
        cin>>n>>k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin>>arr[i];    
        
        sort(arr.begin(), arr.end());
        // find thee longest subarray , where consecutive element have atmost k difference
        int maxLen = 1;
        int currLen = 1;
        for(int i = 1 ; i < n ; i++){
            if(arr[i] - arr[i - 1] <= k) currLen++;
            else currLen = 1;
            maxLen = max(maxLen, currLen);
        }
        cout<<n - maxLen<<endl;
    }

}