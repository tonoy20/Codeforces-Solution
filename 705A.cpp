#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3,s4;
    s1 = "I hate";
    s2 = "I love";
    s3 = " that ";
    s4 = " it";
    string s = "";
    int n;
    cin>>n;
    int i=1;
    while(n)
    {
        if(n>0)
        {
            if(s.empty())
            {
                s = s + s1;
                n--;
            } else {
                s = s + s3 + s1;
                n--;
            }
        }
        if(n>0)
        {
            s = s + s3 + s2;
            n--;
        }
        if(n==0)
        {
            s = s + s4;
            cout<<s<<endl;
        }
    }
    return 0;
}
