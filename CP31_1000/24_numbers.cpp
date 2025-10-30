#include<bits/stdc++.h>
using namespace std;

int main() {
    long long  t;
    cin>>t;
    while(t-->0){
        long long  n,m;
        cin>>n>>m;
        long long  sum=0;
        long long  mini=INT_MAX;
        int count=0;
        for(long long  i=0;i<n;i++){
            for(long long  j=0;j<m;j++){
                long long  num;
                cin>>num;
                if(num<0) count++;
                sum+=abs(num);
                mini=min(mini,abs(num));
            }
        }
        if(count%2==1){
            cout<<sum-2*mini<<endl;
        }
        else{
            cout<<sum<<endl;
        }
        
    }
    return 0;
}