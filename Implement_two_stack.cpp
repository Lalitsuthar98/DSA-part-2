// Implement Two stack using the simple array 
#include<iostream>
using namespace std;
class stack{
    int *array;
    int top1;
    int top2;
    int size;
    public:
    stack(int size){
        this->size = size;
        top1 = -1;
        top2 = size;
        array = new int[size];
    }
    void push1(int data){
        if( top1+1 == top2){
            cout<<"stack1 is full not space to store"<<endl;
            return;
        }
        top1++;
        array[top1] = data;
    }
    void push2(int data){
        if( top2-1 == top1){
            cout<<"stack2 is full not space to store"<<endl;
            return;
        }
        top2--;
        array[top2] = data;
    }
    void pop1(){
        if(top1 == -1){
            cout<<"stack1 is empty"<<endl;
            return;
        }
        top1--;
        cout<<"pop1 is successfully"<<endl;
    }
    void pop2(){
        if(top2 == size){
            cout<<"stack2 is a empty"<<endl;
            return;
        }
        top2++;
        cout<<"pop2 is successfully"<<endl;
    }
    bool isempty1(){
         if(top1 == -1) return true;
         else return false;
    }
    bool isempty2(){
        if(top2 == size) return true;
        else return false;
    }
    
    bool isfull_1(){
        if(top1 == size-1 || top1+1 == top2) return true;
        else return false;
    }
    bool isfull_2(){
        if(top2 == 0 || top2-1 == top1 ) return true;
        else return false;
    }

    void peek1(){
        if(isempty1()){
            cout<<"stack1 is empty"<<endl;
            return;
        }
        cout<<"stack1 top element is :"<<array[top1];
    }
    void peek2(){
        if(isempty2()){
            cout<<"stack2 is empty"<<endl;
            return;
        }
        cout<<"stack2 top element is :"<<array[top2]<<endl;
    }
    void display1(){
        if(isempty1()){
            cout<<"stack1 is empty "<<endl;
            return;
        }
        for(int i = 0 ; i <= top1 ; i++){
            cout<<" "<<array[i];
        }cout<<endl;
    }
    void display2(){
        if(isempty2()){
            cout<<"stack2 is empty"<<endl;
            return;
        }
        for(int i = size-1 ; i >= top2 ; i--){
            cout<<" "<<array[i];
        }
        cout<<endl;
    }
    ~stack(){
        delete []array;
    }
};
int main(){
    stack s(5);
    s.push1(10);
    s.push1(20);
    s.push1(30);
    s.push1(40);
    s.push1(50);
    s.push2(60);
    s.display1();
    s.display2();
    return 0;
}