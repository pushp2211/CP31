#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        vector<int>arr(n+1);
        for(int i=1;i<n+1;i++){
          int num;
          cin>>num;
          arr[i]=num;
        }
        int ans=abs(arr[1]-1);

        for(int i=2;i<=n;i++){
            ans=__gcd(abs(arr[i]-i),ans);
        }
    cout<<ans<<endl;
    }
    return 0;
}