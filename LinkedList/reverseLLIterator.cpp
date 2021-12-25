#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

void reverseLL(Node** head){
    Node* pre = NULL;
    Node* current = *head;
    Node* post = NULL;
    while (current != NULL)
    {
        post = current->next;
        current->next = pre;

        pre = current;
        current = post;
    }
    *head = pre;
}

void insertAtTail(Node** head, int val){
    Node* n = new Node(val);
    if (*head==NULL)
    {
        *head = n;
        return;
    }
    Node* temp = *head;
    while (temp->next!=NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(Node* head){
    while (head!=NULL)
    {
        cout<<head->data<<" -> ";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node* head = NULL;
    insertAtTail(&head, 1);
    insertAtTail(&head, 2);
    insertAtTail(&head, 3);
    insertAtTail(&head, 4);
    display(head);
    reverseLL(&head);
    display(head);
    return 0;
}