#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        int n,k;
        cin>>n>>k;
        vector<int>arr;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            arr.push_back(num);
        }
        int maxi=INT_MIN;
        int start=0;
        for(int i=0;i<n;i++){
          if(arr[i]>k){
            maxi=max(maxi,2*(k-start));
            break;
          }

          maxi=max(abs(start-arr[i]),maxi);
          start=arr[i];
        }
        if(k>arr[n-1]) maxi=max(maxi,2*(k-arr[n-1]));
        
        cout<<maxi<<endl;
    }
    return 0;
}