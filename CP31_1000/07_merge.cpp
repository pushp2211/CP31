#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        vector<int>arr1(n);
        vector<int>arr2(n);
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        for(int i=0;i<n;i++){
            cin>>arr2[i];
        }
        
        unordered_map<int,int>mpp1;
        unordered_map<int,int>mpp2;

        int count=1;
        int prev=arr1[0];
        mpp1[arr1[0]]=1;
        for(int i=1;i<n;i++){
            if(prev==arr1[i]){
                count++;
            }
            else{
                count=1;
            }
            if(mpp1.find(arr1[i])==mpp1.end()){
                mpp1[arr1[i]]=count;
            }
            else{
                mpp1[arr1[i]]=max(mpp1[arr1[i]],count);
            }
            prev=arr1[i];
        }

        count=1;
        prev=arr2[0];
        mpp2[arr2[0]]=1;
        for(int i=1;i<n;i++){
            if(prev==arr2[i]){
                count++;
            }
            else{
                count=1;
            }
            if(mpp2.find(arr2[i])==mpp2.end()){
                mpp2[arr2[i]]=count;
            }
            else{
                mpp2[arr2[i]]=max(mpp2[arr2[i]],count);
            }
            prev=arr2[i];
        }

        int maxi=0;
        for(auto it:mpp1){
            if(mpp2.find(it.first)!=mpp2.end()){
                maxi=max(maxi,it.second+mpp2[it.first]);
            }
            else{
                maxi=max(maxi,it.second);
            }
        }
        for(auto it:mpp2){
            if(mpp1.find(it.first)==mpp1.end()){
                maxi=max(maxi,it.second);
            }
        }
        cout<<maxi<<endl;
    }
    return 0;
}
