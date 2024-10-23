#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--) {
        int ar[4];
        for(int i=0; i<4; i++) {
            cin>>ar[i];
        }
        int max1,max2, min1, min2;
        bool x = true;
        max1 = max(ar[0],ar[1]);
        min1 = min(ar[0],ar[1]);
        max2 = max(ar[2],ar[3]);
        min2 = min(ar[2],ar[3]);

        if(max1<min2){
            x = false;
        }
        if(max2<min1){
            x = false;
        }

        if(x){
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
