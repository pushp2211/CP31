#include<bits/stdc++.h>
using namespace std;
int m=1e9+7;
int main() {
    //sort and upper bound of b's ele in a
    int t;
    cin>>t;
    while(t-->0){
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }

        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            ans[i]=a.end()-upper_bound(a.begin(),a.end(),b[i]);
        }

        long long final=1;
        int point=0;
        for(int i=n-1;i>=0;i--){
            final*=(ans[i]-point);
            final%=m;
            point++;
            if(final<=0) break;
        }
        if(final<=0) cout<<0<<endl;
        else cout<<final<<endl;
    }
    return 0;
}