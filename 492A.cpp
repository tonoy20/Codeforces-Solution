#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>mp;
    int s =0;
    mp[1] = 1;
    for(int i=2; i<=1000; i++){
        mp[i] = mp[i-1] + i;
    }
    cout<<mp[5]<<endl;
    int n;
    cin>>n;
    for(int i=1; i<n+50; i++){
        s = s + mp[i];
        if(s>n){
            cout<<i-1<<endl;
            break;
        }
    }
    return 0;
}
