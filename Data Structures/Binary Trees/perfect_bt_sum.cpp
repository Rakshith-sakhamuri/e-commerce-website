#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node *left , *right ;
};

node *create_node(int data){
    node *element;
    element->data = data;
    element->left = NULL;
    element->right = NULL;
    return element ;
}

int perfect_sum(int n){
    int mini_result;
    mini_result = pow(2,(n-1)) ;
    int result = mini_result*(mini_result+1)/2 ;
    cout<<"RESULT::"<<result*n<<endl;
    return 0 ;
}

int main(){
    int n = 2;
    perfect_sum(n);
    return 0 ;
}