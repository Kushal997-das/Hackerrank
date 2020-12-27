void reversePrint(SinglyLinkedListNode* head) {
     SinglyLinkedListNode*start=head,*last=head->next,*temp;
     start->next=NULL;
     while(last){
         temp=last->next;
         last->next=start;
         start=last;
         last=temp;
     }
     while(start){
         printf("%d\n",start->data);
         start=start->next;
     }

}
