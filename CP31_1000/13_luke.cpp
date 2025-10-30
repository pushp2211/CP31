#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        int n,x;
        cin>>n>>x;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int count=0;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            mini=min(num,mini);
            maxi=max(maxi,num);
            if((maxi-mini)>2*x){
                count++;
                mini=num;
                maxi=num;
            }
        }
        cout<<count<<endl;
        cout<<endl;
    }
    return 0;
}