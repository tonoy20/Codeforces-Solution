#include<bits/stdc++.h>
using namespace std;

bool canBeABC(const string& s) {
    if(s == "abc") return true;
    if(s[0] == 'a' && s[2] == 'b' && s[1] == 'c') return true;
    if(s[1] == 'a' && s[0] == 'b' && s[2] == 'c') return true;
    if(s[2] == 'a' && s[1] == 'b' && s[0] == 'c') return true;

    return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--) {
        string s;
        int cnt = 0;
        cin>>s;
        if(canBeABC(s)) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}
