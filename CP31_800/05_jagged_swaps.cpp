#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        vector<int>arr;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            arr.push_back(num);
        }
        if(arr[0]==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}