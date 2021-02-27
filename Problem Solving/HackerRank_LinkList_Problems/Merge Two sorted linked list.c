SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2){
    SinglyLinkedListNode *head=NULL;
    if(head1==NULL)
      return(head2);
    else if(head2==NULL)
      return(head1);
    else{
        SinglyLinkedListNode *temp1=head1,*temp2=head2,*temp;
        int flag=0;
        while(1){
            if(temp1->data<temp2->data){
                if(head==NULL){
                    head=temp1;
                    temp=head;
                }
                else{
                    temp->next=temp1;
                    temp=temp->next;
                }
                temp1=temp1->next;
            }
            else{
                if(head==NULL){
                    head=temp2;
                    temp=head;
                }
                else{
                    temp->next=temp2;
                    temp=temp->next;
                }
                temp2=temp2->next;
            }
            if(temp1==NULL || temp2==NULL){
            if(temp1==NULL)
                temp->next=temp2;
            else
                temp->next=temp1;
            break;
            }
        }
    }
return(head);
}
