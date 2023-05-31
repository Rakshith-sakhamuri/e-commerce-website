#include<iostream>
using namespace std ;

class node{
    public:
    int data;
    node *left,*right;

};

node *addNode(int data ){
    node *temp;
    temp->data = data ;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

int right_sum(node *root , int *sum){
    if(root == NULL){
        return 0;
    }
    if(root->right){
        if(root->right->right == NULL && root->right->left ==NULL){
            *sum = *sum + root->right->data ;
        }
    }
    right_sum(root->left,sum);
    right_sum(root->right,sum);
}

int main(){
     
    node *root = addNode(1);
    root->left = addNode(2);
    root->left->left = addNode(4);
    root->left->right = addNode(5);
    root->left->left->right = addNode(2);
    root->right = addNode(3);
    root->right->right = addNode(8);
    root->right->right->left = addNode(6);
    root->right->right->right = addNode(7);
    int sum = 0;
    right_sum(root, &sum);
    cout << sum << endl;
    return 0;
}