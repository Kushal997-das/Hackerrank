SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode *new_node,*temp;
    int i=0;
    new_node=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    temp=head;
    for(i=1;i<=position-1;i++){temp=temp->next;}

    new_node->data=data;
    new_node->next=temp->next;
    temp->next=new_node;
    return(head);


}
