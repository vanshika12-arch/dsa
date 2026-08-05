#include<iostream>
using namespace std;    
#include<unordered_set>
int main()
{
    
    int arr[]={1,2,3,4,5,6,7,8,9,10,1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    unordered_set<int> unique_elements;
    cout<<"unique elements in the array";
    for(int i=0;i<n;i++)
    {
        if(unique_elements.find(arr[i])==unique_elements.end())
        {
            unique_elements.insert(arr[i]);
            cout<<arr[i]<<" ";
        }
    }
    cout<<"\n";
    return 0;
}