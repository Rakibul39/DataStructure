#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the array size:";
    cin>>size;
    int a[size],i,j,temp;
    cout<<"Enter the array element:"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
        cout<<endl;

    }
    for(i=0;i<size;i++)
    {
        for(j=0;j<size-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<<"Bubble sorting the array:"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<" ";

    }
    return 0;
}
