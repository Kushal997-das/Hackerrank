void decode_huff(node * root, string s) {
    node *temp=root;
    int i=0;
    while(1){
        if(temp->data){
          cout<<""<<temp->data;
          temp=root;
        }
        if(s[i]==0)
          break;
        else{
            if(s[i]=='1'){
            temp=temp->right;
            i+=1;
            }
            else {
            temp=temp->left;
            i+=1;
            }
        }
    }
}
