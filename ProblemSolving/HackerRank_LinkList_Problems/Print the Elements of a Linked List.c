void printLinkedList(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *temp;
    temp=head;
    while(temp!=NULL){
        printf("%d\n",temp->data);
        temp=temp->next;
    }

}
