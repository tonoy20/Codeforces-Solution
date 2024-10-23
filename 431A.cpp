#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4];
    string s;
    for(int i=0; i<4; i++)
        cin>>arr[i];
    cin>>s;
    int temp,res=0;
    for(int i=0; i<s.size(); i++){
        temp = s[i] - '0';
        res += arr[temp-1];
    }
    cout<<res<<endl;
    return 0;
}
