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
        int ar[n*2];
        int t1=0,t2=0;
        for(int i=0; i<2*n; i++){
            cin>>ar[i];
        }
        for(int i=0; i<2*n; i++){
            if(ar[i] % 2 ==0)
                t1++;
            else
                t2++;
        }
        if(t1 == t2)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
