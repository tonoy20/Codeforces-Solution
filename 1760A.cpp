#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int m1 = max(a,b);
        int m2 = min(a,b);
        int m3 = max(c,m2);
        cout<<min(m1, m3)<<endl;
    }
}
