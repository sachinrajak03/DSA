#include <iostream>
using namespace std;

class MyQueue {
public:
    int* arr;
    int size;
    int front;
    int rear;

    MyQueue(int size) {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }

    void push(int val) {
        if (rear == size - 1) {
            cout << "overflow queue" << endl;
            return;
        } else if (front == -1 && rear == -1) {
            front++;
            rear++;
            arr[rear] = val;
        } else {
            rear++;
            arr[rear] = val;
        }
    }

    void pop() {
        if (front == -1 && rear == -1) {
            cout << "underflow queue" << endl;
            return;
        } else if (front == rear) {
            arr[front] = -1;
            front = -1;
            rear = -1;
        } else {
            arr[front] = -1;
            front++;
        }
    }

    int getsize() {
        if (front == -1 && rear == -1) {
            return 0;
        } else {
            return (rear - front + 1);
        }
    }

    bool isempty() {
        if (front == -1 && rear == -1) {
            return true;
        } else {
            return false;
        }
    }

    int getfront() {
        if (front == -1) {
            return -1;
        } else {
            return arr[front];
        }
    }

    int getrear() {
        if (rear == -1) {
            return -1;
        } else {
            return arr[rear];
        }
    }

    void print() {
        cout << "front index: " << front << " rear index: " << rear << endl;
        cout << "size of queue: " << getsize() << endl;
        cout << "printing queue: ";
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl << endl;
    }
};

int main() {
    MyQueue q(5); // Example usage

    q.push(1);
    q.push(2);
    q.push(3);

    q.print();

    q.pop();
    q.print();

    cout << "Front: " << q.getfront() << endl;
    cout << "Rear: " << q.getrear() << endl;

    return 0;
}

