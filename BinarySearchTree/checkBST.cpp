#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int data){
            this->data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

void inOrder(Node* root){
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

bool isBST(Node* root, Node* min=NULL, Node* max=NULL){
    if (root==NULL)
    {
        return true;
    }
    
    if (min!=NULL && root->data <= min->data)
    {
        return false;
    }
    if (max!=NULL && root->data >= max->data)
    {
        return false;
    }
    bool leftValid = isBST(root->left, min, root);
    bool rightValid = isBST(root->right, root, max);
    return leftValid && rightValid;
}

bool isPresent(Node* root, int value){
    if (root == NULL)
    {
        return false;
    }
    if (value == root->data)
    {
        return true;
    }
    if (value > root->data)
    {
        return isPresent(root->right, value);
    }
    if (value < root->data)
    {
        return isPresent(root->left, value);
    }
    return false;
}

bool isPresentIT(Node* root, int value){
    while (root != NULL)
    {
        if (value == root->data)
        {
            return true;
        }
        if (value > root->data)
        {
            root = root->right;
        }
        else
        {
            root = root->right;
        }
        
    }
    return false;
}

bool insertInBST(Node** toor, int data){
    Node* root = *toor;
    while (root != NULL)
    {
        if (root->data == data)
        {
            return false;
        }
        if (data > root->data)
        {
            if (root->right == NULL)
            {
                root->right = new Node(data);
                return true;
            }
            
            root = root->right;
        }
        if (data < root->data)
        {
            if (root->left == NULL)
            {
                root->left = new Node(data);
                return true;
            }
            
            root = root->left;
        }
        
    }
    return false;
}

// bool deleteInBST(Node** root, int key){
//     Node* trv = *root;
//     if (key < trv->data)
//     {
//         deleteInBST()
//     }
    
// }

int main(){
    Node* root = new Node(5);
    root->left = new Node(3);
    root->right = new Node(6);

    root->left->left = new Node(1);
    root->left->right = new Node(4);

    // cout<<endl<<isBST(root)<<endl;
    inOrder(root);
    cout<<endl;
    // cout<<isPresent(root, 5)<<endl;
    // cout<<isPresentIT(root, 11)<<endl;
    // cout<<insertInBST(&root, 7)<<endl;
    // cout<<root->right->right->data;

    inOrder(root);

    return 0;
}