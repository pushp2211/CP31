#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        vector<int>arr;
        for(int i=0;i<n;i++){
            int num;
            cin>>num;
            if(i==0){
                if(num==1) num++;
                arr.push_back(num);
                continue;
            }
            else{
            int prev=arr[i-1];
            if(num==1) num++;
            while(num%prev==0){
                num++;
            }
            arr.push_back(num); 
            }
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}