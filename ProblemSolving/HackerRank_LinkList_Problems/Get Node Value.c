int getNode(SinglyLinkedListNode* head, int positionFromTail) {
    int count=0,i;
    SinglyLinkedListNode *temp;
    temp=head;
    while(temp!=NULL){
    count++;
    temp=temp->next;
    }
    temp=head;
    for(i=1;i<count-positionFromTail;i++){
        temp=temp->next;
    }
    return(temp->data);
}
