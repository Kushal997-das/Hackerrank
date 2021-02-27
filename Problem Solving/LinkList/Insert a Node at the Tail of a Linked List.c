SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data)
{
   SinglyLinkedListNode *temp,*new_node;
   new_node=(SinglyLinkedListNode*)malloc(sizeof(SinglyLinkedListNode));
   new_node->data=data;
   new_node->next=NULL;
   if(head==NULL){head=new_node;}
   else{
   temp=head;
   while(temp->next!=NULL){temp=temp->next;}
   temp->next=new_node;
   }
   return(head);
}

