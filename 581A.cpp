#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int c = max(a,b);
    int d = min(a,b);

    int s = (c-d)/2;
    cout<<d<<" "<<s<<endl;
    return 0;
}
