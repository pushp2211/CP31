#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin>>t;
    while(t-->0){
        long long n;
        cin>>n;
        long long mini=LONG_MAX;
        vector<long long>ans;
        for(long long i=0;i<n;i++){
            long long size;
            cin>>size;
            vector<long long>temp;
            for(long long j=0;j<size;j++){
                long long num;
                cin>>num;
                temp.push_back(num);
            }
            sort(temp.begin(),temp.end());
            ans.push_back(temp[1]);
            mini=min(temp[0],mini);
        }

        sort(ans.begin(),ans.end());
        long long sum=0;
        for(long long i=1;i<ans.size();i++){
            sum+=ans[i];
        }
        sum+=mini;
        cout<<sum<<endl;
        cout<<endl;
    }
    return 0;
}