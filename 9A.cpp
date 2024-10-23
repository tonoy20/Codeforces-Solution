#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,w;
    cin>>y>>w;
    int s = max(y,w);
    int a,b;
    a = 6-(s-1);
    b = 6;
    int gcd;
    for(int i=1; i <= a && i <= b; ++i)
    {
        // Checks if i is factor of both integers
        if(a%i==0 && b%i==0)
            gcd = i;
    }
    cout<<a/gcd<<"/"<<b/gcd<<endl;
    return 0;
}
