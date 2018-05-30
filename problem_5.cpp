#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j,a,k,mul=0;
    cout<<"Enter the array size:";
    cin>>m>>n;
    int first[m][n],second[m][n],sum[m][n];
    cout<<"Enter the first array element:"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>first[i][j];
        }
    }
    cout<<"Enter the second array element:"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>second[i][j];
        }
    }

    cout<<" enter 1 for addition\n enter 2 for subtraction\n enter 3 for multiplication\n";
    cin>>a;

    if(a==1){
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum[i][j]=first[i][j]+second[i][j];
        }
    }

    cout<<"Addition of two matrix is:"<<endl;
        for(i=0;i<m;i++)
    {        for(j=0;j<n;j++)
        {
            cout<<sum[i][j]<<"  ";
        }
        cout<<endl;
        }
    }

    if(a==2){

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum[i][j]=first[i][j]-second[i][j];
        }
    }
        cout<<"Subtraction of two matrix is:"<<endl;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<sum[i][j]<<"  ";
        }
        cout<<endl;
    }
        }

    if(a==3){
        for(i=0;i<m;i++){
        for(j=0;j<n;j++){
                mul=0;
                for(k=0;k<n;k++){
                    mul=mul+first[i][k]*second[k][j];
        }
        sum[i][j]=mul;
    }
   }
    cout<<"multiplication of two matrix is"<<endl;

     for(i=0;i<m;i++){
        for(j=0;j<n;j++){
                cout<<sum[i][j]<<"\t";
        }
        cout<<endl;
     }
    }
    else
    return 0;
}
