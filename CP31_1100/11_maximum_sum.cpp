#include<bits/stdc++.h>
using namespace std;

int main() {
    long long  t;
    cin>>t;
    while(t-->0){
        long long  n,k;
        cin>>n>>k;
        vector<long long>arr(n);
        long long  sum=0;
        for(long long  i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        sort(arr.begin(),arr.end());
        long long  mini=0;
        for(long long  i=0;i<2*k;i++){
          mini+=arr[i];
        }
        long long curr=mini;
        int point1=2*k-1;
        int point2=n-1;
        for(int i=0;i<k;i++){
          curr = curr - arr[point1] - arr[point1 - 1] + arr[point2];
          if(curr<mini) mini=curr;
          point1-=2;
          point2--;
        }
        cout<<sum-mini<<endl;
      }
    return 0; 
}