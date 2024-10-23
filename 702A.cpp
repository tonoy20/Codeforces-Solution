#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr[t];
    int r = 1;
    int p = 0;
    for(int i=0; i<t; i++)
        cin>>arr[i];
    for(int i=1; i<t; i++){
        if(arr[i]>arr[i-1]) {
            r++;
        } else {
            if(p<r)
                p = r;
            r = 1;
        }
    }
    if(p<r)
        p = r;

    cout<<p<<endl;
    return 0;
}
