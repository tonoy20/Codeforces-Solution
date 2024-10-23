#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s = 0;
    int c1,c2,c3,c4;
    if(n>=100) {
        c1 = n/100;
        n = n%100;
      //  cout<<c1<<" "<<n<<endl;
        s = s+ c1;
        if((n%100) == 0){ cout<<s<<endl; return 0; }
    }
    if(n>=20) {
        c2 = n/20;
        n = n%20;
    //    cout<<c2<<" "<<n<<endl;
        s = s+c2;
         if((n%20) == 0){ cout<<s<<endl; return 0; }
    }
    if(n>=10) {
        c3 = n/10;
        n = n%10;
     //   cout<<c3<<" "<<n<<endl;
        s=s+c3;
         if((n%10) == 0){ cout<<s<<endl; return 0; }
    }
    if(n>=5) {
        c4 = n/5;
        n = n%5;
   //     cout<<c4<<" "<<n<<endl;
        s=s+c4;
         if((n%5) == 0){ cout<<s<<endl; return 0; }
    }
    if(n>0) {
    //    cout<<n<<endl;
          s = s+n;
        cout<<s<<endl;
    }



    return 0;
}
