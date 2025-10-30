#include<bits/stdc++.h>
using namespace std;

int main() {
    long long  t;
    cin>>t;
    while(t-->0){
        long long  n;
        cin>>n;

        while(true){
         long long  temp=n;
         while(temp>0){
            if(temp%10>0){
                if(n%(temp%10)!=0){
                    break;
                }
            }
            temp/=10;
         }
        if(temp==0) break;
        n++;
        }
        cout<<n<<endl;
    }
    return 0;
}