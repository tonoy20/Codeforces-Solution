#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int p=0,n=-1,m;
    while(t--)
    {
        string s;
        cin>>s;
        int prev=-1,res = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i] == '1'){
                if(prev != -1)
                    res += (i-prev-1);
                prev = i;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}
