#include<bits/stdc++.h>
using namespace std ;

class node{
    public:
    int data;
    node *left;
    node *right;
};

node* newNode(int data){
    node* root = new node();
    root->data = data;
    root->left = NULL;
    root->right = NULL;
    return root;
}

int checkSum(node *root){
    int sum = 0 ;
    if(root == NULL || (root->left == NULL && root->right ==NULL)){
        return 1 ;
    }
    else{
        if( root->left != NULL ){
            sum = sum+ root->left->data;

        }
        if(root->right !=NULL){
            sum=sum+root->right->data;
        }
        
        return ((root->data == sum) && checkSum(root->left) && checkSum(root->right));
        
    }
   // return 0 ;
}

int main(){
    node *root = newNode(10);
    root->left     = newNode(8);
    root->right = newNode(3 );
    root->left->left = newNode(3);
    root->left->right = newNode(5);
    root->right->right = newNode(2);
    if(checkSum(root) ){
           cout << "The given tree satisfies "
            << "the children sum property ";}
    else{
        cout << "The given tree does not satisfy "
            << "the children sum property ";}
    
 
    getchar();
    return 0;
}