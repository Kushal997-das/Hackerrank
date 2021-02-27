struct node* insert( struct node* root, int data ) {
	struct node* new_node, *temp;
        new_node=(struct node*)malloc(sizeof(struct node));
        new_node->data=data;
        new_node->left=NULL;
        new_node->right=NULL;
        if(root==NULL)
          root=new_node;
        else{
            temp=root;   
            while(1){
                if(temp->data==data)
                  break;
                if(data>temp->data){
                    if(temp->right==NULL){
                      temp->right=new_node;
                      break;
                    }
                    temp=temp->right;  
                }
                if(data<temp->data){
                    if(temp->left==NULL){
                      temp->left=new_node;
                      break;
                    }
                    temp=temp->left;  
                }  
            }
        }
return(root);	
}
