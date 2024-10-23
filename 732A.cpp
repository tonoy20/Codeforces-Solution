#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k, r;
    cin>>k>>r;
    int a = k%10;
   // cout<<a<<endl;
    int c;
  //  c = (a*r);
 //   if((c%10)==0){ cout<<r<<endl; return 0; }
    for(int i=1; i<=10; i++) {
        c = i*a;
        c = c%10;
        if(c==r || c==0){
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}
