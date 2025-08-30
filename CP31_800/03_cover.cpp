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
        //if u do find three subcontigous empty block in arr ans is 2_infinite water
        //else count of empty blocks
        int count=0;
        bool three=false;
        for(int i=0;i<n;i++){
          if (i - 1 >= 0 && s[i - 1] == '.' && s[i] == '.' && i + 1 < n && s[i + 1] == '.'){
              three=true;
              break;
            }
            if(s[i]=='.') count++;
        }
        if(three){
            cout<<2<<endl;
        }
        else{
            cout<<count<<endl;
        }
    }
    return 0;
}