#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l = s.size();
    int m = 0,a,b;
    a = abs('a' - s[0]);
    b = abs(26 - a);
    if(a < b)
        m+=a;
    else
        m+=b;
    for(int i=1; i<l; i++){
        a = abs(s[i-1]-s[i]);
        b = abs(26 - a);
        if(a < b)
            m = m + a;
        else
            m = m + b;
    }
    cout<<m<<endl;
    return 0;
}
