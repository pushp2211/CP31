#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int len=1; //incase s.size=1 len=2 is ans.
        int count=1;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]) count++;
            else count=1;
            len=max(len,count);
        }
        cout<<len+1<<endl;
    }
    return 0;
}