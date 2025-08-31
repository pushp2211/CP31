#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        int odd=0;
        int even=0;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            if(num%2==0) even++;
            else odd++;
        }
        if(odd%2==1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}