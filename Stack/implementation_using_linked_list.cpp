// Implementation using the linked list  
#include<iostream>
using namespace std;  
class node{ 
     public:
    int data;
    node * next;
    node(int data){
        this->data = data;
        next = NULL;
    }
};
class stack {
    node * top; 
    public:
    stack(){
        top = NULL;
    } 
    void push(int data){
        node* newnode = new node(data); 
        newnode->next = top;   
        top = newnode;
    }
    void pop(){
        if(top == NULL){
            cout<<"the stack is empty"<<endl;
            return;
        }
        node * temp = top;
        top = temp->next;
        delete(temp);
    }

    void peek(){
        if(top == NULL){
            cout<<"the stack is empty "<<endl;
            return;
        }
        cout<<"the top element in stack is :"<<top->data<<endl;
    }

    bool isempty(){
        if(top == NULL){
            return true;
        }else{
            return false;
        }
    }

    void Display(){
        if(top == NULL){
            cout<<"the stack is empty"<<endl;
            return;
        }
        cout<<"stack element :";
         node * temp = top; 
         while (temp != NULL)
         {
            cout<<" "<<temp->data;
            temp = temp->next;
         }
    }
};

int main(){
     stack s;
     s.push(10);
     s.push(20);
     s.push(30);
     s.push(40); 
     s.Display();
     
}