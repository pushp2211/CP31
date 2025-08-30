#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        int n,k;
        cin>>n>>k;
        vector<int>arr;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            arr.push_back(num);
        }
        if(k>=2) cout<<"YES"<<endl;
        if(k==1){
            int idx=-1;
            for(int i=0;i<n-1;i++){
                if(arr[i]>arr[i+1]){
                    idx=1;
                    break;
                }
            }
            if(idx==-1) cout<<"YES"<<endl;
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
