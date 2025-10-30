#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        string s;
        cin>>s;
        int count0=0;
        int count1=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0') count0++;
            else count1++;
        }
        int point=0;
        while(1){
            if(s[point]=='0'){
                if(count1==0){
                    break;
                }
                count1--;
            }
            else{
                 if(count0==0){
                    break;
                }
                count0--;
            }
            point++;
        }
        int ans=s.size()-point;
        cout<<ans<<endl;

    }
    return 0;
}