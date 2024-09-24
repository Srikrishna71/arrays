#include<iostream>
#include<queue>
using namespace std;
class stackk{
    public:
    queue<int>q1,q2;
    void push(int x){
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
    }
    void pop(){
        if(q1.empty()){
            cout<<"empty";
        }
        q1.pop();
    }
    int top(){
        if(q1.empty()) return -1;
        return q1.front();
    }
    bool empty(){
        return q1.empty();
    }
};
int main(){
    stackk s;
    s.push(10);
    s.push(20);
    s.push(30);
    
    cout<< s.top() << endl;  // Output: 30
    s.pop();
    
    cout<< s.top() << endl;  // Output: 20
    s.pop();
    
    cout<< s.top() << endl;  // Output: 10
    s.pop();
    
    if (s.empty()) {
        cout << "Stack is empty" << endl;
    }
    return 0;
}
