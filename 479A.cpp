#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int arr[6];
    arr[0] = a*b*c;
    arr[1] = (a+b)*c;
    arr[2] = a*(b+c);
    arr[3] = a+b+c;
    arr[4] = a+b*c;
    arr[5] = a*b+c;
    int len = sizeof(arr) / sizeof(arr[0]);

    cout<<*max_element(arr, arr+len)<<endl;
    return 0;
}
