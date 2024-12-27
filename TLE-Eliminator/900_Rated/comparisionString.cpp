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
        string s;
        cin>>s;

        int ans = 0 , currLength = 0 ;
        // longest consecutive streak with '>' characters
        for(int i=0; i<n; i++){
            if(s[i]=='>') currLength++;
            else currLength = 0;
            ans = max(ans, currLength);
        }
        currLength = 0;
        for(int i=0; i<n; i++){
            if(s[i]=='<') currLength++;
            else currLength = 0;
            ans = max(ans, currLength);
        }
        cout<<ans + 1<<endl;
    }

}