node* reverse(node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* prev = NULL;
    node* curr = head;
    node* forward = NULL;
    while(curr!=NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
