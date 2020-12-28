void postOrder( struct node *root) {
    if(root){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }

}
