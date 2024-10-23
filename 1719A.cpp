#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int a,b,c;
        cin>>a>>b>>c;
        long int s,p;
        s = abs(b-c) + (c - 1);
        p = a - 1;
        if(p > s)
            cout<<2<<endl;
        else if(s > p)
            cout<<1<<endl;
        else
            cout<<3<<endl;
    }
    return 0;
}
