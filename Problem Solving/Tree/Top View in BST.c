void topView(struct node *root) {
    if(root->left){
        root->left->right=NULL;
        topView(root->left);
    }
    printf("%d ",root->data);
    if(root->right){
        root->right->left=NULL;
        topView(root->right);
    }
}
