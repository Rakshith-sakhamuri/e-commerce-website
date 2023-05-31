#include<iostream>
#include<bits/stdc++.h>
#include<queue>
using namespace std ;

class bt_node{
    public:
    int data ;
    bt_node *left , *right ;
};

bt_node* newbtnode(int data){
    bt_node* temp = new bt_node();
    temp->data = data ;
    temp->left = NULL ;
    temp->right = NULL ; 
    return temp ;
}

bt_node* bt_from_arr(bt_node* root , int arr[],int i,int n){
    if(i == n){
        return root ;
    }
    
    bt_node* node ;
    node = newbtnode(arr[i]) ;
    root = node ;
    root->left = bt_from_arr(root->left,arr,2*i+1,n);
    root->right = bt_from_arr(root->right,arr,2*i+2,n);
   return NULL ;

}

void in_Order(bt_node* root)
{
    if (root != NULL)
    {
        in_Order(root->left);
        cout << root->data <<"->";
        in_Order(root->right);
    }
}

int main(){
    int n ;
    cin >> n ;
    int arr[n];
    for(int  i = 0 ; i < n ; i ++){
        cin>>arr[i] ;
    }
    bt_node* root= bt_from_arr(root,arr,0,n) ;
    in_Order(root);
    return 0 ;

}