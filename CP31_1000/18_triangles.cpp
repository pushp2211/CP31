#include<bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin>>t;
    while(t-->0){
        long long w,h;
        cin>>w>>h;
        long long n1,n2;
        cin>>n1;
        vector<long long>arr1(n1);
        for(long long i=0;i<n1;i++){
            cin>>arr1[i];
        }
        cin>>n2;
        vector<long long>arr2(n2);
        for(long long i=0;i<n2;i++){
            cin>>arr2[i];
        }

        long long n3,n4;
        cin>>n3;
        vector<long long>arr3(n3);
        for(long long i=0;i<n3;i++){
            cin>>arr3[i];
        }
        cin>>n4;
        vector<long long>arr4 (n4);
        for(long long i=0;i<n4;i++){
            cin>>arr4[i];
        }
        
        long long maxi=LONG_MIN;
        
        sort(arr1.begin(),arr1.begin());
        sort(arr2.begin(),arr2.begin());
        sort(arr3.begin(),arr3.begin());
        sort(arr4.begin(),arr4.begin());
        //taking height of triangle as y axis
        long long temp=max(arr1[n1-1]-arr1[0],arr2[n2-1]-arr2[0]);
        maxi=max(maxi,temp*h);
        temp=max(arr3[n3-1]-arr3[0],arr4[n4-1]-arr4[0]);
        maxi=max(maxi,temp*w);

       cout<<maxi<<endl;

    }
    return 0;
}