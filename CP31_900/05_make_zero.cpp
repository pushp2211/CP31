#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        //we can do maxm 8 so for even sized 2...1 to n____in odd 1 to n-1 and n-1 to n...4 oprn.
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
        }
        if(n%2==0){
            cout<<2<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n<<endl;
        }
        else if(n%2==1){
            cout<<4<<endl;
            cout<<1<<" "<<n-1<<endl;
            cout<<1<<" "<<n-1<<endl;
            cout<<n-1<<" "<<n<<endl;
            cout<<n-1<<" "<<n<<endl;
        }
    }
    return 0;
}