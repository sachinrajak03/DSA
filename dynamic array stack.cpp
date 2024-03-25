#include <iostream>
using namespace std;

class Stack {
public:
    int* arr;
    int size;
    int top;
    Stack(int size) {
        arr = new int[size];
        this->size = size;
        this->top = -1;
    }
    void push(int data) {
        if (top == size - 1) {
            cout << "stack is overflow" << endl;
            return;
        }
        else {
            top++;
            arr[top] = data;
        }
    }
    void pop() {
        if (top == -1) {
            cout << "stack is underflow" << endl;
            return;
        }
        else {
            top--;
        }
    }
    bool isempty() {
        if (top == -1) {
            return true;
        }
        else {
            return false;
        }
    }
    int gettop() {
        if (top == -1) {
            return -1;
        }
        else {
            return arr[top];
        }
    }
    int getsize() {
        return top + 1;
    }
    void print() {
        cout << "top: " << top << endl;
        cout << "top element: " << gettop() << endl;
        cout << "size of stack: " << getsize() << endl;
        if (isempty()) {
            cout << "empty stack" << endl;
        }
        else {
            cout << "not empty stack" << endl;
        }
        cout << "stack: [";
        for (int i = 0; i < getsize(); i++) {
            cout << arr[i] << " ";
        }
        cout << "]" << endl;
    }
};

int main() {
    Stack st(8);
    st.push(10);
    st.print();
    st.push(20);
    st.print();
    st.pop();
    st.print();
    st.pop();
    st.print();
    return 0;
}

