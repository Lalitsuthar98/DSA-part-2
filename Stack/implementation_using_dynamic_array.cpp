// Implementation using the dynamic array 
#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;   
    int top;
    int size;

public:
    Stack(int s) {
        size = s;
        top = -1;
        arr = new int[size];   
    }

    void push(int value) {
        if (top == size - 1) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = value;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        top--;
    }

    void peek() {
        if (top == -1) {
            cout << "Stack is empty\n";
            return;
        }
        cout << "Top element: " << arr[top] << endl;
    }

    ~Stack() {
        delete[] arr;   // free memory
    }
}; 
int main(){
    Stack s(5);
    
}