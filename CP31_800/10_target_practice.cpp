#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t-->0){
        int points=0;
        for(int i=1;i<=10;i++){
            for(int j=1;j<=10;j++){
                char num;
                cin>>num;
                if(num=='X'){
                    //four quadrants possible
                    if(i<=5 && j<=5) points+=min(i,j);
                    else if(i<=5 && j>5) points+=min(i,11-j);
                    else if(i>5 && j<=5) points+=min(11-i,j);
                    else if(i>5 && j>5) points+=min(11-i,11-j);

                    //universal
                    // points+=min({i,j,11-i,11-j});
                }
            }
        }
        cout<<points<<endl;
    }
    return 0;
}