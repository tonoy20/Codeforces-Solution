#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t ;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int rr[n];
        int s =0;
        for(int i=0; i<n; i++){
            cin>>rr[i];
         s+=rr[i];
        }
        if(s%2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
