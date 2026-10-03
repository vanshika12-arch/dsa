#include <iostream>
using namespace std;

#define MAX 5

int stack[MAX];
int top = -1;

void pop() {
    if (top == -1) {
        cout << "Stack Underflow! Stack is empty." << endl;
    } else {
        cout << "Popped element: " << stack[top] << endl;
        top--;
    }
}

int main() {
    
    stack[++top] = 10;
    stack[++top] = 20;
    stack[++top] = 30;

    cout << "Stack before POP: ";
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }
    cout << endl;

        pop();

    cout << "Stack after POP: ";
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }
    cout << endl;

    return 0;
}

