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
        sort(arr.begin(),arr.end());
        int maxi=1;
        int len=1;
        int point=0;
        while(point<n-1){
            if((arr[point+1]-arr[point])<=k){
                len++;
                maxi=max(maxi,len);
            }
            else{
                len=1;
            }
            point++;
        }
    cout<<n-maxi<<endl;
    }
    return 0;
}