#include<bits/stdc++.h>
using namespace std;

int main() {
        double n,d;
        cin>>n>>d;
        vector<double>arr;
        for(int i=0;i<n;i++){
            double num;
            cin>>num;
            arr.push_back(num);
        }
        sort(arr.begin(),arr.end());
        int count=0;
        int ans=0;
        for(int i=n-1;i>=0;i--){
            int temp=ceil((d+1)/arr[i]);
            count+=temp;
            if(count>n) break;
            else{
                ans++;
            }
        }
        cout<<ans<<endl;
    return 0;
}