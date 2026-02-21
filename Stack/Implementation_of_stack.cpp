// stack 
// stack is linear data structure  that follows the Lifo rule  
// lifo means the last in first out 
// Example --> stack of plates  
// stack have the basic operation 
// push,pop,peek/top , isempty  
// stack can implement by array , linked list , STL


// stack implement using array with oops concept 
#include<iostream> 
using namespace std; 
class stack{
    int array[100];
    int size;
    int top;
    public:
    stack(int size){
        this->size = size;
         top = -1;
    }

    void push(int data){
        if(top == size-1) {
            cout<<"the stack have not space to store the value"<<endl; 
            return;
        }
        top++; 
        array[top] = data;  
        cout<<"data is insert successfull"<<endl;
    } 

    void pop(){
        if(top == -1){
            cout<<"stack is empty"<<endl;
            return;
        }
        top--;
        cout<<"pop is successfull"<<endl;
    } 
    void peek(){
        if(top == -1){
            cout<<"the stack is empty"<<endl;
            return;
        }
        cout<<"the top element in stack is :"<<array[top];

    }
    bool isempty(){
        if(top == -1){
            return true;
        }else{
            return false;
        }
        
    }
    bool isfully(){
        if(top == size-1){
            return true;
        }else{
            return false;
        }
    }
    void Display(){
        if(top == -1){
            cout<<"the stack is empty"<<endl; 
            return ;
        }
        for(int i = top ; i >= 0 ; i--){
            cout<<" "<<array[i];
        }
    }
};
int main(){
  stack s(5);
  s.push(10);
  s.push(20);
  s.push(30);
  s.push(40);
  s.push(50);
  s.push(60);
  s.Display();
  
}