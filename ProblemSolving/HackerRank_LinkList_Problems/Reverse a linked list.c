SinglyLinkedListNode* reverse(SinglyLinkedListNode* head){
   SinglyLinkedListNode *start=head,*last=head->next,*temp=NULL;
     start->next=NULL;
     while(last){
        temp=last->next;
        last->next=start;
        start=last;
        last=temp;
     }
   head=start;
   return(head);
}
