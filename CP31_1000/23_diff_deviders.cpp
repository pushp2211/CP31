#include<bits/stdc++.h>
using namespace std;
bool isprime(long long  n){
    for(long long  i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main() {
    long long  t;
    cin>>t;
    while(t-->0){
        //we will multiply two numbers which have least d diff and prime
        long long  d;
        cin>>d;
        long long  ans=1;
        
        long long  count=0;
        long long  num=1;
        while(count<2){
            num+=d;
            bool flag=true;
            while(flag){
                if(isprime(num)){
                    ans*=num;
                    flag=false;
                    count++;
                    break;
                }
                num++;
            }
        }
    cout<<ans<<endl; 
        
    }
    return 0;
}