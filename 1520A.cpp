#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char ar[n];
        scanf("%s", ar);
        deque<char>s;
        bool p = true;
        s.push_back(ar[0]);
        for(int i=1; i<n; i++){
            if(s.back() == ar[i]){
                continue;
            } else {
                 for(auto it = s.cbegin();it!=s.cend();it++){
                    if(ar[i] == *it){
                        p =false;
                        break;
                    }
                }
                 s.push_back(ar[i]);
            }
        }
    //     for(auto it = s.cbegin();it!=s.cend();it++)
     //           cout << *it << " ";

        if(p)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
