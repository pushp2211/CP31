#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        int n,k;
        cin>>n>>k;

        int count_even=0;
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            if(num%2==0){
                count_even++;
            }
            mini=min(mini,(k-num%k)%k);
        }

        if(k==2){
          if(count_even>=1){
            cout<<0<<endl;
          }
          else{
            cout<<1<<endl;
          }
        }
        else if(k==4){
            if(count_even>=2 ||mini==0){
            cout<<0<<endl;
          }
          else if(count_even==1 || mini==1){
            cout<<1<<endl;
          }
          else{
            cout<<2<<endl;
          }
        }
        else if(k==3 || k==5){
           cout<<mini<<endl;
        } 
        cout<<endl;
    }
    return 0;
}