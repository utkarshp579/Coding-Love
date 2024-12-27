// doing error as I was return answer in wrong format , he has asked to return in size , tnen display format.

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
        int t = 0;
        cin>>n;
        vector<int> v;
        int last = -1;
        for (int i = 0; i < n; i++){
            int x ;
            cin>>x;
            if( i == 0 || last == 1){
                t++;
                // cout<<x<<" ";
                v.push_back(x);
            }else{
                t+=2;
                // cout<<1<<" "<<x<<" ";
                v.insert(v.end() , {1,x});
            }
            last = x;
        }
        cout<<t<<endl;
        displayArr(&v[0] , v.size());
        cout<<endl;
    }

}