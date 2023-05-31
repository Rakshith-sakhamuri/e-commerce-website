#include<bits/stdc++.h>
using namespace std;


class node{
    public:
    int data;
    node *left,*right;
};

node *new_node(int data ){
    node *root = new node();
    root->data = data;
    root->left = NULL;
    root -> right = NULL;
    return root;
}

int print_inorder(node *root){
    node *curr = root ;
    while(curr!= NULL){
        if(curr->left == NULL){
            cout<<curr->data<<" ";
            curr = curr->right ;
            continue;
        }
        int falg = 0 ;
        while(curr->right!=NULL){
            curr=curr->right;
            int falg = 1 ;
        }
        if(falg == 1){
            curr = curr->right;
            cout<<curr->data<<"->"<<endl;
            curr=curr->right;
        }
        else{
            curr= curr->right;
        }

    }
}