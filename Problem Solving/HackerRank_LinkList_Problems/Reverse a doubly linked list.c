DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {
      DoublyLinkedListNode *last=head->next,*temp;
      while(last){
          temp=last->next;
          last->next=head;
          if(head->prev==NULL)
              head->next=NULL;
          head->prev=last;
          last->prev=temp;
          head=last;
          last=temp;
      }
      head->prev=NULL;

      return(head);
}
