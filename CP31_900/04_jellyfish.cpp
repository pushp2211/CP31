#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        long long a,b,n;
        cin>>a>>b>>n;
        long long sum=0;
        for(int i=0;i<n;i++){
            long long num;
            cin>>num;
            if(num>=a) sum+=a-1;
            else sum+=num;
        }
        long long ans=sum+b;
        cout<<ans<<endl;
    }
    return 0;
}