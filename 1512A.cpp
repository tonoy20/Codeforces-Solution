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
        int ar[n];
        for(int i=0; i<n; i++)
            cin>>ar[i];

        int x1,x2,c1=1,c2=0;
        x1 = ar[0];
        for(int i=1; i<n; i++){
            if(ar[i] == x1){
                c1++;
            } else {
                x2 = ar[i];
                c2++;
            }
        }
        int x;
        if(c1 == 1){
            x = x1;
        } else {
            x = x2;
        }

        for(int i=0; i<n; i++){
            if(ar[i] == x){
                cout<<i+1<<endl;
                break;
            }
        }
    }
    return 0;
}
