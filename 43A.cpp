#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    map<string,int>mp;
    while(n--) {
        cin>>s;
        mp[s]++;
    }

    int ms = 0;
    string res;
    for(map<string, int>::iterator it = mp.begin(); it != mp.end(); ++it) {
        if(ms<(*it).second) {
            ms = (*it).second;
            res = (*it).first;
        }
    }

    cout<<res<<endl;

    return 0;
}
