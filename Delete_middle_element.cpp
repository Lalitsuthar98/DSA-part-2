// Delete the middle element from stack using the Recursion 
#include<iostream>
#include<stack>
#include<deque> 

// internaly stack use the deque  

// solve function 
using namespace std;
void solve(stack<int>&s,int &count,int &size){
    // base case  
    if(count == size/2){
        s.pop();
        return;
    }
    // approach 
    int data = s.top();
    s.pop();
    count++;
    solve(s,count,size);
    s.push(data);
}
int main(){
    stack<int> s(deque<int>{1,2,3,4,5});
    int count = 0;
    int size = s.size();
    solve(s,count,size);
    while(!s.empty()){
        cout<<" "<<s.top()<<endl;
        s.pop();
    }

}

