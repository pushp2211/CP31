#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin>>t;
    while(t-->0){
        long long n,p;
        cin>>n>>p;
        vector<pair<long long,long long>>arr(n);
        for(long long i=0;i<n;i++){
            long long num;
            cin>>num;
            arr[i].second=num;
        }
        for(long long i=0;i<n;i++){
            long long num;
            cin>>num;
            arr[i].first=num;
        }
        
        sort(arr.begin(),arr.end());

        long long count=1;
        long long cost=p;
        for(long long i=0;i<arr.size();i++){
            if(count==n){
                break;
            }
            if(arr[i].first<=p){
                if((count+arr[i].second)<=n){
                   count+=arr[i].second;
                   cost+=arr[i].first*arr[i].second;
                }
                else{
                    long long temp=n-count;
                    count+=temp;
                    cost+=temp*arr[i].first;
                }
                }
                else{
                    break;
                }
                
            }

            if(count<n){
                long long temp=n-count;
                cost+=temp*p;
            }

        cout<<cost<<endl;
        cout<<endl;
        }
        
    return 0;
}