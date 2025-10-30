#include<bits/stdc++.h>
using namespace std;

int main() {
    long long  t;
    cin>>t;
    while(t-->0){
        long long  x,y,k;
        cin>>x>>y>>k;
        long long  trades=k;
        long long  need=k*y+k; //one stick one coal
        long long ans = (need - 1 + (x - 2)) / (x - 1);//this is n-1 we need n-1 trades more
        // long long  ans=ceil((double)(need-1)/(double)(x-1)); double may fail for large value than 1e15
        trades=k+ans;
        
        cout<<trades<<endl;
    }
    return 0;
}