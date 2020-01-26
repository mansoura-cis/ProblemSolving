#include <iostream>
using namespace std;
 

int main()
{
    int x=0,y=0,z=0,n,c=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%3==0)
                x+=1;
            else if(arr[i]%3==1)
                y+=1;
            else if(arr[i]%3==2)
                z+=1;
        }
    c=(x/2)+min(y,z);
    cout<<c;
    return 0;
}
