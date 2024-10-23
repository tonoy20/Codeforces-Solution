#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1;
        string s2;
        cin>>s1>>s2;
        map<char, int>mp;
        for(int i=0; i<s1.size(); i++){
            mp[s1[i]] = i+1;
        }
        int p = 0;
        for(int k=0; k<s2.size()-1; k++){
            p = p + abs(mp[s2[k]] - mp[s2[k+1]]);
        }
        cout<<p<<endl;
    }
    return 0;
}
