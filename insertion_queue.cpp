#include<iostream>
using namespace std;
class insertion_queue{
    int front,rear;
    int arr[10];
    public:
    insertion_queue(){
        front = -1;
        rear = -1;
    }
    void insert(int x){
        if(rear == 9){
            cout<<"Queue overflow"<<endl;
        }
        else{
            rear++;
            arr[rear] = x;
            if(front == -1){
                front = 0;
            }
        }
    }
    void display(){
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};int main(){
    insertion_queue q;
    q.insert(5);
    q.insert(10);
    q.insert(15);
    q.display();
    return 0;
}
