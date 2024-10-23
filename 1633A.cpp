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
        if(n%7 == 0){
            cout<<n<<endl;
        } else {
            int x = n%7;
            int y = 7-x;
            int xx = n%10;
            if(xx+y<10) n+=y;
            else n-=x;

            cout<<n<<endl;
    }
    }
    return 0;
}
