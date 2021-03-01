bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
  while(1){
      if(head1==NULL && head2==NULL)
        return(1);
      else{
          if(head1==NULL || head2==NULL)
             return(0);
          if(head1->data==head2->data){
              head1=head1->next;
              head2=head2->next;
          }
          else{
              return(0);
          }
      }

}
}
