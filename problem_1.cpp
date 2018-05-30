#include<iostream>
using namespace std;
int main()
{
    int size,i;
    cout<<"Enter the array size:";
    cin>>size;
    int a[size];
    cout<<"Enter the array element:"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
        cout<<endl;
    }
    cout<<"Output array is:"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;

}
