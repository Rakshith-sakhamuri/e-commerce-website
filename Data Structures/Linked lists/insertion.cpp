#include<iostream>
#include<queue>
using namespace std ;

class Node{
    public:
    int data ;
    Node  *next ;
};

void att_first(Node *head,int data){
    if(head == NULL){
        head->data = data ;
    }
}

void att_middle(Node *head,int n,int data){
    Node *temp ;
    Node *new_node=new Node() ;
    for(int i = 0 ; i < n ; i ++){
        temp = temp->next ;
    }
    new_node->data = data ;
    new_node->next = temp->next ;
    temp->next = new_node ;
}

void att_end(Node *head,int data){
    int flag = 0;
    Node *temp = head;
    Node *new_node = new Node();
    new_node->data = data ;
    while(flag > 0){
        if(temp->next = NULL ){
            temp->next = new_node ;
        }
        temp = temp->next ;
    }
}
