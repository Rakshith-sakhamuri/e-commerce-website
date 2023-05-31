#include<iostream>
using namespace std;

class node{
    public:
    int data ;
    node *left,*right ;
};

node* new_node(int data){
    node* root = new node();
    root->data = data ;
    root->left = NULL ;
    root->right = NULL ;
    return root ;
}

node* construct(int pre_n[],int pre_mir[],int &i,int l,int h,int n){
    if(l>h || i >=h){
        return NULL;
    }
    node* root = new_node(pre_n[i]);
    ++(i);

    if(l==h)
    return root;
    int x;
    if(i<=h){
  //      root->left = construct(pre_n,pre_mir,x,)
    }
}