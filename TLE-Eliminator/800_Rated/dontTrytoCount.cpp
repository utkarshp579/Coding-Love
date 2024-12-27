// Also I have to submit in cpp 17 format.


#include<bits/stdc++.h>
using namespace std;
void displayArr(int arr[] , int n){ 
    for(int i = 0 ; i < n ; i++) cout<<arr[i]<<" ";
}
void solve(string x , string s){
    int a = 0;
    while(a <= 6){
        if(x.find(s) != string::npos){
            cout<<a<<endl;
            return;
        }
        x += x;
        a++;
    }
    cout<<-1<<endl;
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t ;
    cin>>t;
    while(t--){
        int n , m ;
        cin>>n>>m;
        string x , s;
        cin>>x>>s;  
        solve(x,s);
    }

}