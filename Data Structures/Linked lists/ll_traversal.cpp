#include<iostream>
using namespace std ;

class Node {
public:
    int data;
    Node* next;
};

void traversal(Node *root ){
    while(root != NULL){
        cout<<root->data<<"->";
        root = root->next ;
    }
}

int main(){
    Node *head = NULL,*second = NULL,*third = NULL ;
    head = new Node() ;
    head->data = 1 ;
    head->next = second;
    second->data = 2 ;
    second->next = third ;
    third->data = 3 ;
    third->next = NULL ;
    traversal(head) ;
    return 0 ; 

}