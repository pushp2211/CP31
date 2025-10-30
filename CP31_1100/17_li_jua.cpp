#include<bits/stdc++.h>
using namespace std;

int main() {
    long long  t;
    cin>>t;
    while(t-->0){
        int n,k;
        cin>>n>>k;
        vector<vector<int>>arr1(n,vector<int>(n));
        vector<vector<int>>arr2(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>arr1[i][j];
                arr2[n-1-i][n-1-j]=arr1[i][j];
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr1[i][j]!=arr2[i][j]) count++;
            }
        }
        //counted twice
        count/=2;
    if(count>k) cout<<"NO"<<endl;
    else{
        int left=k-count;
        if((left%2)==0) cout<<"YES"<<endl;
        else{
            if((n%2)==0) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
        
    }
    return 0;
}