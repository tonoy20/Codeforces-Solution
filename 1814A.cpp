#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int k,n;
        cin>>n>>k;
        long long int a;
        if(n%k == 0) cout<<"YES"<<endl;
        else if(n%2 == 0) cout<<"YES"<<endl;
        else {
            a = n - k;
            if(a%2 == 0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    return 0;
}
