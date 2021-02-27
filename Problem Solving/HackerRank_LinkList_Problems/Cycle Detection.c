bool has_cycle(SinglyLinkedListNode* head) {
    SinglyLinkedListNode *start=head,*last=head->next;
    int flag=0;
    while(last){
        while(start!=last){
            if(last->next==start){
            flag=1;
            break;
            }
            start=start->next;
        }
        if(last->next==start)
        flag=1;
        if(flag==1)
        break;
        else{
        start=head;
        last=last->next;
        }
    }
    if(flag==1)
    return(1);
    else
    return(0);
}
