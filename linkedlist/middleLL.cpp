int getlength(node* head){
    int len = 0;
    while(head!=NULL){
        len++;
        head = head->next;
    }
    return len;
}
node* middle(node* head){
    int mid = getlength(head);
    int ans = (mid/2);
    node* temp = head;
    int cnt = 0;
    while(cnt<ans){
        temp = temp->next;
        cnt++;
    }
    return temp;
}
