#include<bits/stdc++.h>

using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(){}
        Node(int data){
            this->data = data;
            this->next = NULL;
        }
};

class Queue : public Node{
    Node* front;
    Node* back;
    public:
        Queue(){
            this->front = this->back = NULL;
        }
        bool isFull(){
            return (this->front!=NULL && this->back==NULL);
        }
        void enQueue(int data){
            if (this->isFull())
            {
                cout<<"Queue overflow!"<<endl;
                return;
            }
            
            Node* n = new Node(data);
            if (this->front==NULL)
            {
                this->front=n;
                this->back=n;
                return;
            }
            this->back->next = n;
            this->back = n;
            
        }
        bool isEmpty(){
            return (this->front==NULL || this->front==this->back->next);
        }
        void deQueue(){
            if (this->isEmpty())
            {
                cout<<"Queue underflow!"<<endl;
                return;
            }
            Node* toDelete = this->front;
            this->front = this->front->next;
            delete(toDelete);
        }
        int peek(){
            if (this->isEmpty())
            {
                cout<<"Queue underflow!"<<endl;
                return INT_MIN;
            }
            return this->front->data;
        }
};

int main(){
    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    cout<<q.peek();
    q.deQueue();
    cout<<q.peek();
    q.deQueue();
    cout<<q.peek();
    q.deQueue();
    cout<<q.peek();
    q.deQueue();
    cout<<q.peek();
    return 0;
}