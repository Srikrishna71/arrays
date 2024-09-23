#include<iostream>
// #include<stack>
using namespace std;
class stackk{
    public:
    int top;
    int *arr;
    int size;
    stackk(int size){
        this->size=size;
        arr = new int[size];
        top = -1;
    }
    bool isempty(){
        if(top==-1) return true;
        else return false;
    }
    bool isfull(){
        if(top==size-1) return true;
        else return false;
    }
    int topp(){
        if(top>=0) return arr[top];
        else return -1;
    }
    void push(int e){
        if(isfull()){
            cout<<"overflow"<<endl;
            return;
        }
        else{
            arr[++top]=e;
        }
    }
    void pop(){
        if(isempty()){
            cout<<"underflow"<<endl;
            return;
        }
        else{
            top--;
        }
    }
    void display(){
        if(isempty()){
            cout<<"stack is empty"<<endl;
        }
        else{
            for(int i=top;i>=0;i--){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    stackk s(5);
    s.push(9);
    s.push(1);
    s.push(2);
    s.push(7);
    s.push(3);
    s.pop();
    s.pop();
    cout<<s.isfull()<<endl<<s.topp()<<endl;
    s.display();
    return 0;           
}
