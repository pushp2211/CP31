#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin>>t;
    while(t-- > 0){
        long long n,k;
        cin>>n>>k;

        map<long long, vector<long long>> mpp;
        for(long long i=0;i<n;i++){
            long long num;
            cin>>num;
            mpp[num%k].push_back(i+1);
        }

        if(mpp.count(0)){
            for(auto x : mpp[0]) cout << x << " ";
            mpp.erase(0);
        }

        vector<int> ans;
        for(auto &it : mpp){
            int sz = it.second.size();
            for(int i=sz-1;i>=0;i--){
                ans.push_back(it.second[i]);
            }
        }

        reverse(ans.begin(), ans.end());
        for(auto x : ans) cout << x << " ";
        cout << endl;
    }
    return 0;
}
