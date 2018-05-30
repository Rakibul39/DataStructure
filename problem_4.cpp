#include<iostream>
using namespace std;
int main()
{
    int a[20][20];
    int i,j,n,count=0;
    cout<<"Enter array limit: ";
    cin>>n;
    cout<<"Enter the array element: "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"Output array: "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
        count++;
    }
    cout<<"Array number:"<<count<<endl;
    return 0;
}
