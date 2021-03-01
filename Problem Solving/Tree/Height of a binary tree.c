int getHeight(struct node* root) {
    if(root==NULL)
      return -1;

    int left_tree = getHeight(root->left);
    int right_tree = getHeight(root->right);

    if(left_tree>right_tree)
      return(left_tree+1);
    else
      return(right_tree+1);

}
