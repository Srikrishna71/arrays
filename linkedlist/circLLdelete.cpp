void deletenodes(node* tail,int value){
    if(tail==NULL){
        return;
    }
    else{
        node* prev = tail;
        node* curr = prev->next;
        while(curr->data!=value){
            prev = curr;
            curr = curr->next;
        }
        prev->next=curr->next;
        if(curr==prev){
            tail=NULL;  // 1 node
        }
        if(tail==curr){
            tail = prev; // more than 1
        }
        curr->next=NULL;
        delete curr;
    }
}
