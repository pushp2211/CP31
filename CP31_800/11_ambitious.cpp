#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
     int num;
     cin>>num;
     ans=min(ans,abs(num));
    }
    cout<<ans<<endl;
    return 0;
}