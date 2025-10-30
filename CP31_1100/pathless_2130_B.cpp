#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        int n,s;
        cin>>n>>s;
        vector<int>arr(n);
        int count0=0,count1=0,count2=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==0) count0++;
            else if(arr[i]==1) count1++;
            else count2++;
        }
        
        if(s==count1+2*count2 || s>=count1+2*count2+2) cout<<-1<<" ";
        else{
            for(int i=0;i<count0;i++){
                cout<<0<<" ";
            }
             for(int i=0;i<count2;i++){
                cout<<2<<" ";
            }
             for(int i=0;i<count1;i++){
                cout<<1<<" ";
            }
        }
    cout<<endl<<endl;
    }
    return 0;
}