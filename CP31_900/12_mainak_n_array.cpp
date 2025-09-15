#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int end,start;
        int prev=-1;
        int ans=0;
        //either can pick min and to start or max to end
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            maxi=max(maxi,num);
            mini=min(mini,num);
            if(prev!=-1) ans=max(ans,prev-num); //to handle case of consecutive no giving ans as 999 1 then rotating whole arr pushes them to start n end
            if(i==0) start=num;
            if(i==n-1)end=num;

            prev=num;
        }
        ans=max(maxi-start,max(ans,end-mini));
        cout<<ans<<endl;
    }
    return 0;
}