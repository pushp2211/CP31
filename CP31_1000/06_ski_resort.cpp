#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin>>t;
    while(t-->0){
        long long n,k,q;
        cin>>n>>k>>q;
        long long ans=0;
        long long temp=0;
        long long count=0;
        for(long long i=0;i<n;i++){
            long long num;
            cin>>num;
            if(num<=q){
                temp++;
                if(temp>=k){
                    count++;
                    ans+=count;
                }
            }
            else{
                temp=0;
                count=0;
            }
        }
        cout<<ans<<endl;
        cout<<"\n";
    }
    return 0;
}