#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin>>t;
    while(t-->0){
        long long a,b;
        cin>>a>>b;
        if(b>a) swap(a,b);
        long long count=0;
        if(a%b!=0) cout<<-1<<endl;
        else{
            long long count=0;
            long long temp=a/b;
            while(temp%8==0){
                count++;
                temp/=8;
            }
             while(temp%4==0){
                count++;
                temp/=4;
            }
             while(temp%2==0){
                count++;
                temp/=2;
            }
            if(temp!=1) cout<<-1<<endl;
            else{
                cout<<count<<endl;
            }
        }
        cout<<endl;
    }
    return 0;
}