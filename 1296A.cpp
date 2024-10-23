#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int rr[n];
        int s=0;
        for(int i=0;i<n; i++){
            cin>>rr[i];
            s +=rr[i];
        }
        int e=0,o=0;
        for(int i=0; i<n; i++){
            if(rr[i]%2) o++;
            else e++;
        }
        bool p = false;
        if(s%2) p = true;
        if(((n-o)>0) && o>0) p =true;

        if(p) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
