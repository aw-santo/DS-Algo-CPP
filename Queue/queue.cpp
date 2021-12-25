#include<bits/stdc++.h>
#define size 20
using namespace std;

class Queue{
    int front;
    int back;
    int* arr;
    public:
        Queue(){
            this->front = -1;
            this->back = -1;
            this->arr = new int[size];
        }
        bool isFull(){
            return this->back >= size-1;
        }
        void enQueue(int data){
            if (this->isFull())
            {
                cout<<"Queue overflow!"<<endl;
                return;
            }
            this->back++;
            this->arr[this->back] = data;
            if (this->front == -1)
            {
                this->front=0;
            }
            
        }
        bool isEmpty(){
            return this->front==-1 || (this->front>this->back);
        }
        void deQueue(){
            if (this->isEmpty())
            {
                cout<<"Queue underflow!"<<endl;
                return;
            }
            this->front++;
        }
        int peek(){
            if (this->isEmpty())
            {
                cout<<"Queue underflow!"<<endl;
                return INT_MIN;
            }
            
            return this->arr[this->front];
        }
};

int main(){
    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);

    cout<<q.peek()<<endl;
    q.deQueue();
    cout<<q.peek()<<endl;
    q.deQueue();
    cout<<q.peek()<<endl;
    q.deQueue();
    cout<<q.peek()<<endl;
    q.deQueue();
    cout<<q.peek()<<endl;

    return 0;
}