#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};
void inserthead(node* &head,int d){
    node* temp = new node(d);
    temp->next=head;
    head = temp;
}
void inserttail(node* &tail,int d){
    node* temp = new node(d);
    tail->next=temp;
    tail = temp;
}
void insertatposition(node* &tail,node* &head, int pos,int d){
    if(pos==1){
        inserthead(head,d);
        return;
    }
    node* temp = head;
    int cnt = 1;
    while(cnt<pos-1 && temp!=NULL){
        temp = temp->next;
        cnt++;
    }
    if(temp->next == NULL){
        inserttail(tail,d);
        return;
    }
    node* nodetoinsert = new node(d);
    nodetoinsert->next = temp->next;
    temp->next = nodetoinsert;
}
void searchNode(node* head, int value) {
    node* temp = head;
    int position = 1;  // Position from head

    // Traverse the linked list to find the value
    while (temp != NULL) {
        if (temp->data == value) {
            cout << "Node with value " << value << " found at position " << position << " from head." << endl;
            return;
        }
        temp = temp->next;
        position++;
}
void print(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main() {
    node* n1 = new node(10);
    node* head = n1;
    node* tail = n1;
    inserthead(head,12);
    inserthead(head,15);
    print(head);
    insertatposition(tail,head,4,25);
    print(head);
    return 0;
}
