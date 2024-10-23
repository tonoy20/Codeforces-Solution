#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    if(s[1]=='}') { cout<<0<<endl; return 0;  }

    set<char>s1;

    for(int i=1; i<s.size()-1; i++){
        if(s[i] == ',' || s[i] == ' '){ continue; }
        else {
            s1.insert(s[i]);
        }
    }

    cout<<s1.size()<<endl;

   // for (auto& str : s1) {
   //     cout << str << ' ';
   // }

    return 0;
}
