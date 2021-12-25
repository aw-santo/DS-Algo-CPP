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

void printLevelOrder(Node* root){
    if (root == NULL)
    {
        return;
    }
    
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int c = 0;

    while (!q.empty())
    {
        Node* n = q.front();
        q.pop();
        if (/* condition */)
        {
            /* code */
        }
        
        if (n != NULL)
        {
            cout<<n->data<<" ";
            if (n->left)
            {
                q.push(n->left);
            }
            if (n->right)
            {
                q.push(n->right);
            }
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
        c++;      
    }
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    printLevelOrder(root);
    return 0;
}