#include<iostream>
using namespace std;
 void reversearray( int arr[],int size)
 {
    int start=0;
    int end=size-1;
    while(start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;  

    }
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
    reversearray(arr,n);
    cout<<"reversed array is";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
 }