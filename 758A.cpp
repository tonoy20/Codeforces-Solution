#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int v[n+1];
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    int mx,cnt=0;

    mx=*max_element(v, v+n);

    for(int i=0; i<n; i++) {
        cnt = cnt + (mx-v[i]);
    }

    cout<<cnt<<endl;
    return 0;
}
