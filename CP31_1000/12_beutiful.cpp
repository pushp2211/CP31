#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin>>t;
    while(t-->0){
        long long n,k,b,s;
        cin>>n>>k>>b>>s;
        if(k*b>s){
            cout<<-1;
        }
        else{
            vector<long long>nums(n,0);
            nums[0]=k*b;
            s-=k*b;
            for(long long i=0;i<n;i++){
                if(s-(k-1)>=0){
                    nums[i]+=k-1;
                    s-=(k-1);
                }
                else{
                    nums[i]+=s;
                    s=0;
                }
            if(s==0) break;
            }
            if(s==0){
                for(long long i=0;i<n;i++){
                    cout<<nums[i]<<" ";
                }
            }
            else{
                cout<<-1;
            }
        }
    cout<<endl;

    }
    return 0;
}