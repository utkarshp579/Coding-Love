//either put all small element in b , or put all largest element in c
        //! learning front and back return to value , while begin and end returns an iterator


#include<bits/stdc++.h>
using namespace std;
void displayArr(int arr[] , int n){ 
    for(int i = 0 ; i < n ; i++) cout<<arr[i]<<" ";
}
void solve(int n , vector<int> v){
    sort(v.begin(), v.end());
    if(v.back() == v.front()){
        // learning front and back return to value , while begin and end returns an iterator
        cout<<-1<<endl;
        return;
    }   

    int it = 0;
    while (v[it] == v[0]) it++; // counting no of largest or smallest values. 
    cout << it << " " << n - it << "\n";
    for (int j = 0; j < it; ++j) cout << v[j] << " "; // all small values
    cout << endl;
	for (int j = it; j < n; ++j) cout << v[j] << " ";


    cout << endl;

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
        vector<int> v(n , 0);
        for(auto &x : v){
            cin>>x;
        }
        solve(n,v);
    
    }

}