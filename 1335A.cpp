#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    long int n;
    cin>>n;
    if(n<3){ cout<<0<<endl; }
    else {
        if((n%2)==0){
            cout<<(n/2)-1<<endl;
        } else {
            cout<<int(n/2)<<endl;
        }
    }
}
}
