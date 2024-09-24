#include<iostream>
#include<queue>
using namespace std;
class Stack{
    public:
    queue<int>q;
    void push(int x){
        q.push(x);
        int size=q.size();
        for(int i=1;i<size;i++){
            q.push(q.front());
            q.pop();
        }
    }
    void pop(){
        if(q.empty()){
            cout<<"empty";
        }
        q.pop();
    }
    int top(){
        if(q.empty()) return -1;
        return q.front();
    }
    bool empty(){
        return q.empty();
    }
};
int main(){
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    
    cout<< s.top() << endl;  
    s.pop();
    
    cout<< s.top() << endl;  
    s.pop();
    
    cout<< s.top() << endl;  
    s.pop();
    
    if (s.empty()) {
        cout << "Stack is empty" << endl;
    }
    return 0;
}
