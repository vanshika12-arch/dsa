#include<iostream>
using namespace std;
int main()
{
    int a[10][10],b[10][10],result[10][10];
    int r1,c1,r2,c2;
    int i,j,k;
    cout<<"enter rows and columns of first matrix";
    cin>>r1>>c1;
    cout<<"enter rows and columns of second matrix";
    cin>>r2>>c2;
    if(c1!=r2)
    {
        cout<<"matrix multiplication not possible";
        return 0;
    }
    cout<<"enter elements of first matrix";
    for(i=0;i<r1;i++)   
    {
        for(j=0;j<c1;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter elements of second matrix";
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cin>>b[i][j];
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            result[i][j]=0;
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        { 
            for(k=0;k<c1;k++)
            {
                result[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    cout<<"resultant matrix is";
    for(i=0;i<r1;i++)   
    {
        for(j=0;j<c2;j++)
        {
            cout<<result[i][j]<<" ";

        }
        cout<<endl;
    }
    return 0;
}