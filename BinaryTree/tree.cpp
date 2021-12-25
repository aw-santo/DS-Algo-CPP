#include<iostream>
#include<cstdlib>
using namespace std;

class Node{
    public:
        int data;
        Node* right;
        Node* left;
        Node(int data){
            this->data = data;
            this->right = this->left = NULL;
        }
};

void preOrder(Node* N){
    if (N == NULL)
    {
        return;
    }
    
    cout<<N->data<<" ";
    preOrder(N->left);
    preOrder(N->right);
}
void inOrder(Node* N){
    if (N == NULL)
    {
        return;
    }
    
    inOrder(N->left);
    cout<<N->data<<" ";
    inOrder(N->right);
}
void postOrder(Node* N){
    if (N == NULL)
    {
        return;
    }
    
    postOrder(N->left);
    postOrder(N->right);
    cout<<N->data<<" ";
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    /* 
                 1
                / \
               2   3
              /\   /\
             4  5 6  7

    */
   root->left->left = new Node(4);
   root->left->right = new Node(5);

   root->right->left = new Node(6);
   root->right->right = new Node(7);
   preOrder(root);
   cout<<endl;
   inOrder(root);
   cout<<endl;
   postOrder(root);
   cout<<endl;
    return 0;
}