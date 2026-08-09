#include<iostream>
using namespace std;
class ARRAY{
 int arr[100], size;
 public:
       void input()
       {
        cout<<"enter the size of array";
        cin>>size;
        cout<<"enter the elements of array";
        for(int i =0;i<size;i++)
        {
            cin>>arr[i];
        }
       }
       void insert()
       {
        int pos, element;
            cout<<"enter the position where you want to insert the element";
            cin>>pos;
            cout<<"enter the element you want to insert";
            cin>>element;
            if(pos<0 || pos>size)
            {
                cout<<"invalid position";
                return;
            }
            for(int i=size-1;i>=pos;i--)
            {
                arr[i+1]=arr[i];
            }
            arr[pos]=element;
            size++;
       }
       void del(){
        int pos;
        cout<<"enter the position of element you want to delete";
        cin>>pos;
        for(int i=pos;i<size-1;i++)
        {
            arr[i]=arr[i+1];
        }
        size--;
        cout<<"element deleted successfully";
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
        
       }

};
int main()
{
    ARRAY obj;
    obj.input();
    obj.insert();
    obj.del();
    return 0;
}
        