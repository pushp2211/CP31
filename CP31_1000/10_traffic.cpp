#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        int n;
        char light;
        cin>>n>>light;
        string s;
        cin>>s;
        if(light=='g') cout<<0<<endl<<endl;
        else{
            s+=s;
            int ans=INT_MIN;
            bool flag=false;
            int temp=-1;
            for(int i=0;i<s.size();i++){
                if(s[i]==light && flag==false){
                    temp=0;
                    flag=true;
                }
                if(s[i]=='g' && flag){
                    ans=max(ans,temp);
                    flag=false;
                }
                temp++;
            }
            cout<<ans<<endl<<endl;
        }
        
    }
    return 0;
}