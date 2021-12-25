#include<bits/stdc++.h>

using namespace std;

#define size 100

class Stack{
    int* arr;
    int top;

    public:
        Stack(){
            this->arr = new int[size];
            this->top = -1;
        }

        bool isFull(){
            return top >= size;
        }

        bool isEmpty(){
            return top == -1;
        }

        void push(int data){
            if (this->isFull())
            {
                cout<<"Stack Overflow!"<<endl;
                return;
            }
            this->arr[++top] = data;
        }

        void pop(){
            if (this->isEmpty())
            {
                cout<<"Stack Underflow!"<<endl;
                return;
            }
            this->top--;
        }

        int Top(){
            if (this->isEmpty())
            {
                cout<<"Stack Underflow!"<<endl;
                return INT_MIN;
            }
            
            return this->arr[top];
        }
};

int main(){
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.isEmpty()<<endl;
    cout<<st.isFull()<<endl;

    return 0;
}