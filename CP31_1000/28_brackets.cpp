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
       int count=0;
       int temp=0;
       for(int i=0;i<n;i++){
        if(s[i]=='('){
            temp++;
        }
        else{
            temp--;
            if(temp<0){
                count++;
                temp=0;
            }
        }
       }
       cout<<count<<endl;
        
    }
    return 0;
}