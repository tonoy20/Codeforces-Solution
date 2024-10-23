#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    char c;

    string s = "codeforces";
    while(t--){
        bool p = false;
        cin>>c;
        for(int i=0; i<s.size(); i++){
            if(s[i] == c){
                p = true;
                break;
            }
        }
        if(p)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return  0;
}
