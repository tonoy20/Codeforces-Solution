#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int s = max((max(a,b)),(max(b,c)));
        int s1 = (s-a) + (s-b) + (s-c);
        int n1 = n - s1;
        if(n1<0 || n1%3!=0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
    return 0;
}
