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
            arr.push_back(num);
        }
        sort(arr.begin(),arr.end());
        int maxi=arr[n-1];
        if(arr[0]==arr[n-1]) cout<<-1<<endl;
        else{
            int countc=0;
            int point=n-1;
            while(point>=0){
                if(arr[point]!=maxi) break;
                countc++;
                point--;
            }
            int countb=n-countc;
            cout<<countb<<" "<<countc<<endl;

            int i=0;
            while(1){
                if(arr[i]==maxi) break;
                cout<<arr[i]<<" ";
                i++;
            }
            cout<<endl;

            while(i<n){
                cout<<arr[i]<<" ";
                i++;
            }
            cout<<endl;
        }
    }
    return 0;
}