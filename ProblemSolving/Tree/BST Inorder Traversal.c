void inOrder( struct node *root) {
    if(root){
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }


}
