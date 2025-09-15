#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        long long n,k,x;
        cin>>n>>k>>x;

        long long total=(n*(n+1))/2;
        
        long long kstart=(k*(k+1))/2;
        
        long long remain=n-k;
        long long kend=total-(remain*(remain+1))/2;

        //if within range then okk
        if(x>=kstart && x<=kend) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}