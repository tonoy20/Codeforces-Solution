#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s = n%2;
        if(s !=0)
            cout<<(n/2)+1<<endl;
        else
            cout<<n/2<<endl;
    }
    return 0;
}
