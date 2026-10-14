#include<iostream>
using namespace std;
class deletion_queue{
    int front,rear;
    int arr[10];
    public:
    void insert_element(int x) {
        if (rear == 9) {
            cout << "Queue overflow" << endl;
        }
        else {
            if (front == -1)
                front = 0;

            arr[++rear] = x;
        }
    }
    deletion_queue(){
        front = -1;
        rear = -1;
    }
    void delete_element(){
        if(front == -1 || front > rear){
            cout<<"Queue underflow"<<endl;
        }
        else{
            cout<<"Deleted element: "<<arr[front]<<endl;
            front++;
        }
    }
    void display(){
        for(int i=front;i<=rear;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    deletion_queue q;
    q.insert_element(5);
    q.insert_element(10);
    q.insert_element(15);
    q.display();
    q.delete_element();
    q.display();
    return 0;
}