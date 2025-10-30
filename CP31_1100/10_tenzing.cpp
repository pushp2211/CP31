#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        int n,x;
        cin>>n>>x;
        vector<int>arr1(n);
        vector<int>arr2(n);
        vector<int>arr3(n);
        int ans=0;
        for(int i=0;i<n;i++){
         cin>>arr1[i];
        }
         for(int i=0;i<n;i++){
         cin>>arr2[i];
        }
         for(int i=0;i<n;i++){
         cin>>arr3[i];
        }

        for(int i=0;i<n;i++){
            int temp=ans;
            temp|=arr1[i];
             bool bad=false;
            for(int j=0;j<32;j++){
                if(((temp&(1<<j))!=0) && ((x&(1<<j))==0)){
                    bad=true;
                    break;
                }
            }
            if(bad) break;
            ans|=arr1[i];
        }

        for(int i=0;i<n;i++){
            int temp=ans;
            temp|=arr2[i];
            bool bad=false;
            for(int j=0;j<32;j++){
                if(((temp&(1<<j))!=0) && ((x&(1<<j))==0)){
                    bad=true;
                    break;
                }
            }
            if(bad) break;
            ans|=arr2[i];
        }

        for(int i=0;i<n;i++){
            int temp=ans;
            temp|=arr3[i];
            bool bad=false;
            for(int j=0;j<32;j++){
                if(((temp&(1<<j))!=0) && ((x&(1<<j))==0)){
                    bad=true;
                    break;
                }
            }
            if(bad) break;
            ans|=arr3[i];
        }

        if(ans==x) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}