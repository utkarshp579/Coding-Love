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
        int a , b ;// steps
        cin>>a>>b;
        int x1, x2, y1, y2;
        cin>>x1>>y1;
        cin>>x2>>y2;

        int dx[] = { a , -a };
        int dy[] = { b , -b };

        set<pair<int,int>> st;

        for(int i = 0 ; i < 2 ; i++){
            for(int j = 0 ; j < 2 ; j++){
                int nx = x1 + dx[i];
                int ny = y1 + dy[j];

            
                // cout<<" "<<nx<<" "<<ny<<endl;
                st.insert({nx , ny});

                // +- y , +- x
                nx = x1 + dy[j];
                ny = y1 + dx[i];
                st.insert({nx , ny});
                // cout<<" "<<nx<<" "<<ny<<endl;
                // they are 8 , as we can reach from 8 places. 
            }
        }
        int ans = 0 ;
        for(int i = 0 ; i < 2 ; i++){
            for(int j = 0 ; j < 2 ; j++){
                int nx = x2 + dx[i];
                int ny = y2 + dy[j];
                
                if(st.count({nx , ny})){
                    // cout<<" "<<nx<<" "<<ny<<endl;
                    ans++;
                    st.erase({nx,ny});
                }
                nx = x2 + dy[j];
                ny = y2 + dx[i];
               
                if(st.count({nx , ny})){
                    //  cout<<nx<<" "<<ny<<endl;
                    ans++;
                    st.erase({nx,ny});
                }
            }
        }
        cout<<ans<<endl;
    }

}