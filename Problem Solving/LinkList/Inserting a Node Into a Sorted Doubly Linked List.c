DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
      DoublyLinkedListNode *new_node,*temp=NULL,*temp1=NULL;
      int flag=0;
      new_node = (DoublyLinkedListNode*)malloc(sizeof(DoublyLinkedListNode));
      new_node->data=data;
      new_node->prev=NULL;
      new_node->next=NULL;
      if(head == NULL)
        head=new_node;
      else if(data<=head->data){
          new_node->next=head;
          head->prev=new_node;
          head=new_node;
      }
      else{
          temp=head;
          while(temp->next){
              if(data>=temp->data && data<temp->next->data){
                temp1=temp->next;
                new_node->next=temp1;
                temp->prev=new_node;
                temp->next=new_node;
                new_node->prev=temp;
                flag=1;
                break;
              }
              temp=temp->next;
            }
            if (temp->next==NULL && flag==0){
                  temp->next=new_node;
                  new_node->prev=temp;
            }
        }
return(head);
}
