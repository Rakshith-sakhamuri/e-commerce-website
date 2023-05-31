#include<iostream>
using namespace std ;

class Node{
    public :
    int data ;
    class Node *left , *right ;
};

Node* newNode(int data){
    Node* temp = new Node ;
    temp->data = data ;
    temp->left = NULL ;
    temp->right = NULL ;
    return temp ;
}

void printPostOrder(Node * Node ){
    
}




