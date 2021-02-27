void levelOrder(Node * root) {
        static queue <Node*> store;
        Node *temp=NULL;
        store.push(root);
        while(!store.empty()){
            temp=store.front();
            cout<<temp->data<<" ";
            store.pop();
            if(temp->left)
              store.push(temp->left);
            if(temp->right)
              store.push(temp->right);
        }
    }
