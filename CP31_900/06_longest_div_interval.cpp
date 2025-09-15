#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        long long n;
        cin>>n;
        int start=1;
        while(true){
            if(n%start!=0) break;
            start++;
        }
        cout<<start-1<<endl;
    }
    return 0;
}