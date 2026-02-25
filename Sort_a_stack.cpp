// sort the stack
 
#include<iostream>
#include<stack>
#include<deque>
#include<vector>
using namespace std;
void func(stack<int> &s,int data){
    if(s.empty() || s.top() < data){
        s.push(data);
        return;
    }
   
    int temp = s.top();
    s.pop();
    func(s,data);
    s.push(temp);
}
int main(){
    vector<int> arr  = {5,4,1,2,3};
    stack<int> s;
    for(int i = 0 ; i < arr.size() ; i++){
       func(s,arr[i]);
    }
    while (!s.empty())
    {
        cout<<" "<<s.top();
        s.pop();
    }
    return 0;
}