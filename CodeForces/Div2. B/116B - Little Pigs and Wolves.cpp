#include <iostream>
using namespace std;
 

int main()
{
    int n,m,res=0;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];}}
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if (arr[i][j]=='W'){
                if ((arr[i-1][j]=='P'&&i!=0)||(arr[i][j-1]=='P'&&j!=0)||(arr[i+1][j]=='P'&&(i!=n-1))||(arr[i][j+1]=='P'&&(j!=m-1))){
                    res+=1;
                }
            }
        }
    }
    cout<<res;
    return 0;
}
