struct node *lca( struct node *root, int v1, int v2 ) {
    while(1){
    if(root->data>v1 && root->data>v2)
      root=root->left;
    else if(root->data<v1 && root->data<v2)
      root=root->right;
    else
       break;   
    }
    return(root);

}
