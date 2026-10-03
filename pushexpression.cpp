#include<iostream>
using namespace std;
#define MAX 100
char stack[MAX];
int top=-1;
 void push(char x){
    if(top==MAX-1){
        cout<<"Stack overflow"<<endl;
    }
    else{
        top++;
        stack[top]=x;
    }
}

int main(){
    char expression[MAX];
    cout<<"Enter the expression: ";
    cin>>expression;
    for(int i=0; expression[i]!='\0'; i++){
        push(expression[i]);
    }
    cout<<"The expression after stack is: ";
    for(int i=top; i>=0; i--){
        cout<<stack[i];
    }
    cout << endl;
    return 0;
}