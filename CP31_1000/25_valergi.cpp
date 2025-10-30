#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    //onservation if we want to get the summation equal to another we need the same or least two duplicate no.
    while(t-->0){
        int n;
        cin>>n;
        vector<int>arr(n);
        bool flag=false;
        unordered_set<int>st;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(st.find(arr[i])!=st.end()){
                flag=true;
            }
            st.insert(arr[i]);
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    return 0;
}