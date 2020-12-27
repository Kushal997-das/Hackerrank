SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
        SinglyLinkedListNode *temp=head,*temp1=temp->next;
        while(temp1){
            while(1){
            if(temp->data==temp1->data){
              temp1=temp1->next;
              if(temp1==NULL){
                  temp->next=temp1;
                  break;
              }
            }
            else{
              temp->next=temp1;
              break;
            }
            }
            if(temp1){
                temp=temp1;
                temp1=temp->next;
                }
            else
               break;
        }
return(head);
}
