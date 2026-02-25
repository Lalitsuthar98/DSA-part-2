// Inesert at the bottom the value  
#include<iostream>
#include<deque>
#include<stack>
using namespace std;
void solve(stack<int> &s,int num){
    if(s.empty()){
        s.push(num);
        return;
    }
    int data = s.top();
    s.pop();
    solve(s,num);
    s.push(data);
}
int main(){
   stack<int> s(deque<int>{7,1,4,2});
   int num = 9;
   solve(s,num);
   while (!s.empty())
   {
    cout<<" "<<s.top();
    s.pop();
   }
   
}