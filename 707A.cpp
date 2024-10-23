#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int p = true;
    string arr[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++) {
            cin>>arr[i][j];

            if(arr[i][j] == "C" || arr[i][j] == "M" || arr[i][j]=="Y" ) {
                p = false;
            }
        }
    }
    if(p){
        cout<<"#Black&White"<<endl;
    } else {
        cout<<"#Color"<<endl;
    }

    return 0;
}
