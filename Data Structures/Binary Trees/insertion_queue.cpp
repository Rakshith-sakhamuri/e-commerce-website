#include<iostream>
#include<queue>
using namespace std ;

class Node{
    public:
    int data ;
    Node *left ;
    Node *right ;
};

Node* new_node(int data){
    Node* newnode = new Node() ;
    if(!newnode){
        cout<<"ERROR"<<endl;
    } 
    newnode->data = data ;
    newnode->right = NULL ;
    newnode->right = NULL ;
    return newnode ;
}

Node* insert(Node *root,int data){
    if(root == NULL){
        
        return new_node(data) ;
    }
    queue<Node*> q;
    q.push(root) ;

    while( !q.empty() ){
        Node* temp = q.front() ;
        q.pop() ;
        if(temp->left != NULL ){
            q.push(temp->left);
        }
        else{
            temp->left=new_node(data);
            return root ;
        }

        if(temp->right != NULL ){
            q.push(temp->right);
        }
        else{
            temp->right=new_node(data);
            return root ;
        }
    }
    return NULL ;
}

void inorder(Node *temp){
    if(temp == NULL){
        return ;
    }
    inorder(temp->left) ;
    cout<<temp->data<<"->";
    inorder(temp->right) ;
}

int main(){
    Node* root = new_node(10);
    root->left = new_node(11);
    root->left->left = new_node(7);
    root->right = new_node(9);
    root->right->left = new_node(15);
    root->right->right = new_node(8);
 
    cout << "Inorder traversal before insertion: ";
    inorder(root);
    cout << endl;
 
    int key = 12;
    root = insert(root, key);
    key = 24;
    root = insert(root, key);
 
    cout << "Inorder traversal after insertion: ";
    inorder(root);
    cout << endl;
 
    return 0;
}