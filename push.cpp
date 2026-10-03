#include<iostream>
using namespace std;
class stack{
    int top;
    int arr[10];
    public:
    stack(){
        top = -1;
    }
    void push(int x){
        if(top == 9){
            cout<<"Stack overflow"<<endl;
        }
        else{
            top++;
            arr[top] = x;
        }
    } 
    void display(){
        for(int i=top;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main(){
    stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.display();

    return 0;
}