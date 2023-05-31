#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *left,*right;
};

node *newnode(int data){
    node* temp = new node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

int check_sum(node *root){
    int left_data = 0, right_data = 0; 
      
    /* If node is NULL or it's a leaf node  
    then return true */
    if(root == NULL || 
        (root->left == NULL &&  
         root->right == NULL)) 
        return 1; 
    else
    { 
        /* If left child is not present then 0  
        is used as data of left child */
        if(root->left != NULL) 
        left_data = root->left->data; 
      
        /* If right child is not present then 0  
        is used as data of right child */
        if(root->right != NULL) 
        right_data = root->right->data; 
      
        /* if the node and both of its children  
        satisfy the property return 1 else 0*/
        if((root->data == left_data + right_data)&& 
            check_sum(root->left) && 
            check_sum(root->right)) 
        return 1; 
        else
        return 0; 
    } 
}

int main(){
    node *root = newnode(8);
    root->left = newnode(4);
    root->right = newnode(4);
    root->left->left = newnode(9);
    root->left->right = newnode(7);
    root->left->right->left = newnode(1);
    root->left->right->right = newnode(12);
    root->left->right->right->right = newnode(2);
    root->right->right = newnode(11);
    root->right->right->left = newnode(3);
    if(check_sum(root)) 
        cout << "The given tree satisfies "
            << "the children sum property "; 
    else
        cout << "The given tree does not satisfy "
            << "the children sum property "; 
    return 0;
}