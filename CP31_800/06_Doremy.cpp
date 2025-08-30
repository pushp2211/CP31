#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        vector<int>arr;
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            mpp[num]++;
        }
        if(mpp.size()==1) cout<<"YES"<<endl;
        else if(mpp.size()==2){
            int temp1=-1;
            int temp2=-1;
            for(auto it:mpp){
                if(temp1==-1) temp1=it.second;
                else temp2=it.second;
            }
            if(abs(temp1-temp2)<=1) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}