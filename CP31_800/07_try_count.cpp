#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;

        int count=0;
        bool isfound=false;

        if(x.find(s) != string::npos) {
            isfound=true;
            cout<<count<<endl;
          }
        x+=x;
        count++;
        //cases where end and start generate s
        if(x.find(s) != string::npos && !isfound) {
            isfound=true;
            cout<<count<<endl;
        }
        while(x.size()<=2*(s.size()) && !isfound){
        //opn
          x+=x;
          count++;
        //check
         if(x.find(s) != string::npos) {
            isfound=true;
            cout<<count<<endl;
            break;
          }
        }
        if(!isfound) cout<<-1<<endl;

    }
    return 0;
}