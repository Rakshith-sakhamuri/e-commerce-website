#include<iostream>
#include<queue>
using namespace std;

class Node {
    public:
    int data;
    Node *left, *right;
};

Node *newnode(int data){
    Node *node = (Node*)malloc(sizeof(Node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return node;
}

int insertnode(Node *root , int data){
    int count =0;
    queue<Node*> qu;
    qu.push(root);
    while(!qu.empty()){
        Node *temp = qu.front();
        qu.pop();
        if(temp->right == NULL && temp->left ==NULL){
            cout<<temp->data<<" ";
            count+=temp->data;
            continue;
        }
        if(temp->left){
            qu.push(temp->left);
        }
        if(temp->left){
            qu.push(temp->left);
        }

    } 
    return count;
}

void inorder(Node* temp)
{
    if (temp == NULL)
        return;
 
    inorder(temp->left);
    cout << temp->data << ' ';
    inorder(temp->right);
}


int main(){
    Node* root = newnode(10);
    root->left = newnode(11);
    root->left->left = newnode(7);
    root->right = newnode(9);
    root->right->left = newnode(15);
    root->right->right = newnode(8);
 
    
 
    int key = 12;
    int res = insertnode(root, key);
    cout<<endl;
    cout << res;
 
    return 0;
}