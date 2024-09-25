void insert(node*tail , int element,int d){
  if(tail==NULL){
    node* newnode = new node(d);
    tail = newnode;
    newnode->next=newnode;
  }
  else{
    node* curr = tail;
    while(curr->data!=element){
      curr = curr->next;
    }
    node* temp = new node(d);
    temp->next = curr->next;
    curr->next = temp;
  }
}
void print(node* tail){
  node*temp = tail;
  do{
    cout<<tail->data<<" ";
    tail = tail->next;
  }while(tail!=temp);
}
