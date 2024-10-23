#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        bool p = false;
        int m = a + b;
        if(m == c) p = true;

        if(p) cout<<'+'<<endl;
        else cout<<'-'<<endl;
    }
    return 0;
}
