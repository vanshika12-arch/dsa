#include<iostream>
using namespace std;
#include<algorithm>
#include<climits>
void swapmaxmin(int arr[],int size)
{
  if(size<=1) 
    return;
    int maxval=INT_MIN;
    int minval=INT_MAX;
    int maxindex=-1;
    int minindex=-1;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>maxval)
        {
            maxval=arr[i];
            maxindex=i;
        }
        if(arr[i]<minval)
        {
            minval=arr[i];
            minindex=i;
        }
    }
    swap(arr[maxindex],arr[minindex]);
}
int main()
{
    int arr[100],n;
    cout<<"enter the size of array";
    cin>>n;
    cout<<"enter the elements of array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    swapmaxmin(arr,n);
    cout<<"array after swapping max and min elements is";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
  
}