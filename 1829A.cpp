#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string s1 = "codeforces";
        int a = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] != s1[i])
                a++;
        }
        cout<<a<<endl;
    }
    return 0;
}
