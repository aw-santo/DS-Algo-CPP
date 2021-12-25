#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node* prev;
        Node(int data){
            this->data = data;
            this->prev = NULL;
            this->next = NULL;
        }
};

void insertAtHead(Node** head, int data){
    Node* n = new Node(data);
    n->next = *head;
    if (*head != NULL)
    {
        (*head)->prev = n;
    }
    
    // (*head)->next = NULL;
    *head = n;
}

void insertAtTail(Node** head, int data){
    if (*head == NULL)
    {
        insertAtHead(head, data);
        return;
    }
    Node* n = new Node(data);
    Node* temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}


void display(Node* head){
    cout<<"NULL";
    while (head != NULL)
    {
        cout<<" <- "<<head->data<<" -> ";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

void deleteHead(Node** head){  
    Node* toDelete = *head;
    (*head) = (*head)->next;
    (*head)->prev = NULL;
    delete(toDelete);
}

void deleteVal(Node** head, int data){
    if ((*head)->data == data)
    {
        deleteHead(head);
        return;
    }
    
    Node* toDelete = *head;
    while (toDelete->data != data)
    {
        toDelete = toDelete->next;
    }
    toDelete->prev->next = toDelete->next;
    toDelete->next->prev = toDelete->prev;
    delete(toDelete);
}

void deleteAt(Node** head, int pos){
    if (pos == 0)
    {
        deleteHead(head);
        return;
    }
    Node* tmp = *head;
    int count=0;

    while (tmp!=NULL && count!=pos)
    {
        tmp = tmp->next;
        count++;
    }
    tmp->prev->next = tmp->next;
    if (tmp->next != NULL)
    {
        tmp->next->prev = tmp->prev;
    }
    
    delete(tmp);
}

int main(){
    Node* head = NULL;
    insertAtTail(&head, 1);
    insertAtTail(&head, 2);
    insertAtTail(&head, 3);
    insertAtTail(&head, 4);
    insertAtHead(&head, 5);
    display(head);
    // deleteVal(&head, 5);
    deleteAt(&head, 7);
    display(head);
    return 0;
}