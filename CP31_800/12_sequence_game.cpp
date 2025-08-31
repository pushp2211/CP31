#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        int m;
        cin>>m;
        vector<int>arr;
        for(int i=0;i<m;i++){
            int num;
            cin>>num;
            arr.push_back(num);
        }
        vector<int>ans;
        for(int i=0;i<m;i++){
        if(i-1>=0){
            if(arr[i-1]>arr[i]){
                ans.push_back(arr[i]);
            }
        }
        ans.push_back(arr[i]);
        }

        cout<<ans.size()<<endl;

        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}