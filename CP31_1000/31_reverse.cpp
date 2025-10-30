#include<bits/stdc++.h>
using namespace std;
//need to store first and last occurance using two traversal then using two loop of 26 size and decide using comparision
int main() {
        int len;
        cin>>len;
        string s;
        cin>>s;
        vector<int>start(26,-1);
        vector<int>end(26,-1);
        for (int i = 0; i < len; i++) {
          end[s[i] - 'a'] = i + 1; 
        }

        for (int i = len - 1; i >= 0; i--) {
            start[s[i] - 'a'] = i + 1; 
        }


        int one=-1;
        int last=-1;
        for(int i=25;i>=0;i--){
            if(start[i]==-1) continue;
            one=start[i];
            for(int j=i-1;j>=0;j--){
             if(end[i]==-1) continue;
              if(end[j]>one){
                last=end[j];
                break;
              }
            }
            if(last!=-1){
                break;
            }
        }
        if(last==-1) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            cout<<one<<" "<<last<<endl;
        }
        cout<<endl;
    return 0;
}