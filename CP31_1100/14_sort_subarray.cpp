#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        vector<int>orgn(n);
        for(int i=0;i<n;i++){
            cin>>orgn[i];
        }
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        
        int right=n-1;
        int left=0;
        for(int i=0;i<n;i++){
            if(orgn[i]!=arr[i]){
                left=i;
                break;
            }
        }

        for(int i=n-1;i>=0;i--){
            if(orgn[i]!=arr[i]){
                right=i;
                break;
            }
        }
        for(int i=left;i>0;i--){
            if(arr[i-1]<=arr[i]){
                left--;
            }
            else break;
        }
        for(int i=right;i<n-1;i++){
            if(arr[i+1]>=arr[i]){
                right++;
            }
            else break;
        }
        cout<<left+1<<" "<<right+1<<endl;
        cout<<"\n"<<endl;
    }
    return 0;
}