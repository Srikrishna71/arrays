#include<iostream>
// #include<queue>
using namespace std;
class queuee{
    public:
    int front;
    int rear;
    int *arr;
    int size;
    queuee(int size){
        this->size=size;
        arr = new int[size];
        front = rear = -1;
    }
    bool isempty(){
        return (front==-1 || front>rear);
    }
    bool isfull(){
        return (rear==size-1);
    }
    void enqueue(int n){
        if(isfull()){
            cout<<"overflow"<<endl;
        }
        else if(front==-1){
            front = rear = 0;
            arr[rear] = n;
        }
        else{
            arr[++rear]=n;
        }
    }
    void dequeue(){
        if(isempty()){
            cout<<"underflow"<<endl;
        }
        else{
            cout<<"deleted: "<<arr[front]<<endl;
            front++;
            if(front>rear){
                rear=front=-1;
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
            for(int i=front;i<=rear;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    queuee q(5);
    q.enqueue(5);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(9);
    q.enqueue(3);
    q.enqueue(6);
    cout<<q.isfull()<<endl;
    q.dequeue();
    q.dequeue();
    cout<<q.peek()<<endl;
    q.display();
    return 0;
}
