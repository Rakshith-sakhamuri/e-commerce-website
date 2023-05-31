#include <bits/stdc++.h>
using namespace std;
 
struct Node {
    char data;
    struct Node* left;
    struct Node* right;
};
 
struct Node* newNode(char data){
    struct Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return (node);
}
 
struct Node* buildTree(char in[], char pre[], int in_str,int in_n, unordered_map<char, int>& mp){
    static int preIndex = 0;
 
    if (in_str > in_n)
        return NULL;
 
    char curr = pre[preIndex++];
    struct Node* tNode = newNode(curr);
 
    if (in_str == in_n)
        return tNode;
 
    int inIndex = mp[curr];
 
    tNode->left = buildTree(in, pre, in_str, inIndex - 1, mp);
    tNode->right = buildTree(in, pre, inIndex + 1, in_n, mp);
 
    return tNode;
}
 
struct Node* buldTreeWrap(char in[], char pre[], int len){
    unordered_map<char, int> mp;
    for (int i = 0; i < len; i++)
        mp[in[i]] = i;
 
    return buildTree(in, pre, 0, len - 1, mp);
}
 
void printInorder(struct Node* node){
    if (node == NULL)
        return;
    printInorder(node->left);
    printf("%c ", node->data);
    printInorder(node->right);
}
 
int main(){
    char in[] = { 'D', 'B', 'E', 'A', 'F', 'C' };
    char pre[] = { 'A', 'B', 'D', 'E', 'C', 'F' };
    int len = sizeof(in) / sizeof(in[0]);
 
    struct Node* root = buldTreeWrap(in, pre, len);
 
    printf("Inorder traversal of the constructed tree is \n");
    printInorder(root);
}
