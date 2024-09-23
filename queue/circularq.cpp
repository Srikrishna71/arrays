#include<iostream>
// #include<queue>
using namespace std;
class circularqueuee{
    public:
    int front;
    int rear;
    int *arr;
    int size;
    circularqueuee(int size){
        this->size=size;
        arr = new int[size];
        front = rear = -1;
    }
    bool isempty(){
        return (front==-1);
    }
    bool isfull(){
        return ((rear+1)%size==front);
    }
    void enqueue(int n){
        if(isfull()){
            cout<<"overflow"<<endl;
        }
        else if(isempty()){
            front = rear = 0;
            arr[rear] = n;
        }
        else{
            rear = (rear+1)%size;
            arr[rear]=n;
        }
    }
    void dequeue(){
        if(isempty()){
            cout<<"underflow"<<endl;
        }
        else{
            cout<<"deleted: "<<arr[front]<<endl;
            if(front==rear){
                rear=front=-1;
            }
            else{
                front = (front+1)%size;
            }
        }
    }
    int peek(){
        if(!isempty()) return arr[front];
        else{
            cout<<"queue is empty"<<endl;
            return -1;
        }
    }
    void display(){
        if(isempty()){
            cout<<"underflow"<<endl;
        }
        else{
            int i = front;
            while(i!=rear){
                cout<<arr[i]<<" ";
                i = (i+1)%size;
            }
            cout<<arr[rear]<<endl;
        }
    }
};
int main(){
    circularqueuee q(5);
    q.enqueue(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(9);
    q.enqueue(7);
    cout<<q.isfull()<<endl;
    q.dequeue();
    q.enqueue(8);
    cout<<q.peek()<<endl;
    q.display();
    return 0;
}
