#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *left,*right;
};

node *newnode(int data){
    node *new_node = new node();
    new_node->data= data ;
    new_node->left = NULL;
    new_node->right = NULL ;
    return new_node ;
}

int  summationn(node *root,int &sum){
   // static int sum = y ;
    if(root==NULL){
        return 0;
    }
    if(root->left == NULL && root->right == NULL){
        sum = sum + root->data ;
    }
  /*  if(root->right->data == x){
        sum = sum + root->data;
    }*/
    summationn(root->left,sum);
   // summationn(root->right,x,sum) ;
  //  cout<<"sum:::::::::::"<<endl;
 //   return 0 ;
    //return 0 ;

 //   return (root->data +summationn(root->left) + summationn(root->right));
}

int sumOfParentOfXUtil(node* root)
{
    int sum = 0;
    summationn(root, sum );
     
    // required sum of parent nodes
    return sum;
}
 
int main()
{
    node* root = newnode(4);
    root->left = newnode(2);
    root->right = newnode(5);
    root->left->left = newnode(7);
    root->left->right = newnode(2);
    root->right->left = newnode(2);
    root->right->right = newnode(3);
    root->right->left->right = newnode(2);
    int x = 2 ;
    sumOfParentOfXUtil(root);
   // cout << "Sum of all the elements is: " << sum << endl;
 
    return 0;
}