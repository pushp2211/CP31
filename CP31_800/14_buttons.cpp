#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b) cout<<"First"<<endl;
        else if(a<b) cout<<"Second"<<endl;
        else if(c%2==1) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
    return 0;
}