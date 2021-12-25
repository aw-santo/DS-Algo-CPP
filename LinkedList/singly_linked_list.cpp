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

void insertAtHead(Node** head, int val){
    Node* n = new Node(val);
    n->next = *head;
    *head = n;
}

bool search(Node* head, int key){
    while (head!=NULL)
    {
        if (head->data == key)
        {
            return true;
        }
        head = head->next;
    }
    return false;
}

void deleteHead(Node** head){
    Node* toDelete = *head; 
    *head = (*head)->next;
    delete(toDelete);
}

void deleteVal(Node** head, int val){
    if (*head == NULL)
    {
        return;
    }
    if ((*head)->next == NULL)
    {
        deleteHead(head);
        return;
    }
    
    
    Node* temp = *head;
    while (temp->next->data != val && temp->next != NULL)
    {
        temp = temp->next;
    }
    Node* toDelete = temp;
    temp->next = temp->next->next;
    delete(toDelete);
}

int main(){
    Node* head = NULL;
    insertAtTail(&head, 1);
    insertAtTail(&head, 2);
    insertAtTail(&head, 3);
    display(head);
    insertAtHead(&head, 45);
    // display(head);
    // cout<<search(head, 45)<<endl;
    // cout<<search(head, 56)<<endl;
    // cout<<search(head, 3)<<endl;
    deleteVal(&head, 3);
    display(head);
    deleteHead(&head);
    display(head);
    return 0;
}