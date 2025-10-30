#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        //from left and start with some conditions traverse...prefix and suffix unique count.
        int n;
        cin>>n;
        string s;
        cin>>s;
        
        vector<int>start(n);
        vector<int>end(n);
        set<char>st;
        for(int i=0;i<n;i++){
            st.insert(s[i]);
            start[i]=st.size();
        }
        
        st.clear();
        for(int i=n-1;i>=0;i--){
            st.insert(s[i]);
            end[i]=st.size();
        }
        int maxi=INT_MIN;
        for(int i=0;i<n-1;i++){
            maxi=max(maxi,start[i]+end[i+1]);
        }
        cout<<maxi<<endl;

    }
    return 0;
}

// testcase
// 10
// paiumoment
// cout<<10 
//break from m 