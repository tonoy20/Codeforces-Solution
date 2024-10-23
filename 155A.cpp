#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){ cin>>arr[i]; }
    int cnt=0, s1=0,s2=0 ;
    for(int i=1 ; i<n; i++){
        if(arr[i]-arr[0]>0){
            if((arr[i]-arr[0])>s1){
                s1 = arr[i]-arr[0];
            //    cout<<i<<" ";
                cnt++;
            }
        } else {
            if((arr[i]-arr[0])<s2) {
            //    cout<<i<<" ";
                s2 = arr[i]-arr[0];
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;

    return 0;
}
