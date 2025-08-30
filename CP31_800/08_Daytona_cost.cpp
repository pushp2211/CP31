#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        bool ispresent=false;
        int n,k;
        cin>>n>>k;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            if(num==k) ispresent=true;
        }
        if(ispresent) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
