SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
SinglyLinkedListNode *temp,*new_val;
int i=0;
if(position==0){temp=head;head=head->next;free(temp);}
else{
temp=head;
for(i=1;i<=position-1;i++){
    temp=temp->next;
}
new_val=temp->next->next;
temp->next=new_val;
}
return(head);
}
