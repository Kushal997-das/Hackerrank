bool checkBST(Node* root) {
        static Node *prev=NULL;
        if(root){
            if(!checkBST(root->left))
                return false;

            if(prev){
                if (prev->data>=root->data)
                    return false;
            }
            prev=root;
            return checkBST(root->right);

        }
       return true;
	}
