SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode *new_node;
    new_node=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
    new_node->data=data;
    new_node->next=llist;
    llist=new_node;
    return(llist);
}
