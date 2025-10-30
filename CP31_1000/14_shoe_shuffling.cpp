#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        map<int,vector<int>>mpp;
        
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            mpp[num].push_back(i);
        }
        vector<int>ans(n);
        bool flag=false;
        for(auto it:mpp){
            if(it.second.size()==1){
                flag=true;
                break;
            }
            int len=it.second.size();
            //if possible pushing indexes or exchanging

        }
        if(flag=true){
            cout<<-1<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        
    }
    return 0;
}