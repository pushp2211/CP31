#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        unordered_map<char,int>mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }
        int odd=0;
        int even=0;

        for(auto it:mpp){
            if(it.second%2==1) odd++;
            else even++;
        }
        //if characters with odd frequency are just one more than we can remove or less...yes.
        if(odd-1<=k) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}