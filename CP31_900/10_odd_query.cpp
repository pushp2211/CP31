#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin>>t;
    while(t-->0){
        long long n,q;
        cin>>n>>q;
        long long sum=0;
        vector<long long>prefix_sum;
        prefix_sum.push_back(0);
        for(long long i=0;i<n;i++){
          long long nums;
          cin>>nums;
          sum+=nums;
          prefix_sum.push_back(sum);
        }

        for(long long i=0;i<q;i++){
            long long l;
            long long r;
            long long k;
            cin>>l>>r>>k;
            long long temp=sum;
            temp-=prefix_sum[r]-prefix_sum[l-1];
            temp+=(r-l+1)*k;
            if(temp%2==1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

        }
    }
    return 0;
}