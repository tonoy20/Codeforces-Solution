#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int cnt=1;
        int s=2;
        while(s<n){
            s = s + x;
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
