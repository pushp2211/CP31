#include<bits/stdc++.h>
using namespace std;
bool isokk(string &s, int mid, int k) {
    int n = s.size();
    int wcount = 0;
    
    //first window
    for(int i = 0; i < k && i < n; i++) {
        if(s[i] == 'W') wcount++;
    }
    if(wcount <= mid) return true;

    //slide
    for(int i = k; i < n; i++) {
        if(s[i-k] == 'W') wcount--;
        if(s[i] == 'W') wcount++;
        if(wcount <= mid) return true;
    }
    return false;
}
int main() {
    int t;
    cin>>t;
    while(t-->0){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ans=INT_MAX;
        int low=0;
        int high=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(isokk(s,mid,k)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        cout<<ans<<endl<<endl;
    }
    return 0;
}