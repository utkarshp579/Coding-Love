// Also I have to submit in cpp 17 format.


#include<bits/stdc++.h>
using namespace std;
void displayArr(int arr[] , int n){ 
    for(int i = 0 ; i < n ; i++) cout<<arr[i]<<" ";
}
void solve(int n ,  string s){
    if(s.find("...") != string::npos){
        cout<<2<<endl;
        return;
    }

    int count = 0;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == '.') count++;
    }
    cout << count << endl;
    
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t ;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n;
        cin>>s;
        solve(n , s);
    }

}