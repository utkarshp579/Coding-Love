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
        int n, k ;
        cin>>n>>k;
        unordered_set<int> st;
        for (int i = 0; i < n; i++) {
            int x;
            cin>>x;
            st.insert(x);
        }   
        if(st.count(k)) cout<<"Yes"<<std::endl;
        else cout<<"No"<<std::endl;
    
    }

}