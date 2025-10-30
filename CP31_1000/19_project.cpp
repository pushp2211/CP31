#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin>>t;
    while(t-->0){
        long long n;
        cin>>n;
        vector<pair<long long,long long>>visit(n);
        for(long long i=0;i<n;i++){
            cin>>visit[i].first;
            visit[i].second=i+1;
        }
        sort(visit.rbegin(),visit.rend());

        vector<long long>ans(n+1,0);
        long long time=0;
        ans[0]=0;
        long long pos=1;
        long long count=0;
        while(true){
            long long temp=visit[count].second;
            ans[temp]=pos;
            time+=abs(pos)*visit[count].first;
            count++;
            if(count>=n) break;
            temp=visit[count].second;
            ans[temp]=(-pos);
            time+=abs(pos)*visit[count].first;
            count++;
            if(count>=n) break;
            pos++;
        }
        
        cout<<2*time<<endl;
        for(long long i=0;i<=n;i++){
            cout<<ans[i]<<" ";
        }
    cout<<endl<<endl;
    }
    return 0;
}