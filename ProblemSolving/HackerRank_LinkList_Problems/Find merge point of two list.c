int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* currentA = head1;
    SinglyLinkedListNode* currentB = head2;

    while(currentA!=currentB){
        if(currentA->next==NULL)
          currentA=head2;
        else {
        currentA=currentA->next;
        }

        if(currentB->next==NULL)
          currentB=head1;
        else {
        currentB=currentB->next;
        }
    }
    return currentA->data;
}
