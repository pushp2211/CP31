#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        int a,b;
        cin>>a>>b;
        int count=INT_MAX;;
        bool flag=false;
        if(b==1){
            b++;
            flag=true;
        }
        for(int i=0;i<1e5;i++){
            int temp=a;
            int temp_count=0;
            while(temp>0){
                temp/=b;
                temp_count++;
            }
            if((temp_count+i)<=(count)){
                count=temp_count+i;
            }
            else{
                break;
            }
            b++;
        }
        if(flag){
            count++; 
        }
        cout<<count<<endl;
    }
    return 0;
}