// reverse the stack using the recursion 
#include<iostream>
#include<stack>
#include<deque>
using namespace std;
void func(stack<int>&s,int data){
     if(s.empty()){
        s.push(data);
        return;
     }
      int temp = s.top();
     s.pop();
     func(s,data);
     s.push(temp);
}
void reverse(stack<int> &s){
    // base case  
    if(s.empty()){
        return; 
    }
    int data = s.top();
    s.pop();
    reverse(s);
    func(s,data);
}
int main(){
    stack<int> s(deque<int>{1,2,3});
    reverse(s);
    while(!s.empty()){
        cout<<" "<<s.top();
        s.pop();
    }
}