#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reversequeue(queue<int>&q){
    if(q.empty()) return;
    int temp = q.front();
    q.pop();
    
    reversequeue(q);
    q.push(temp);
}

int main() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    
    cout << "Original Queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    
    q.push(1);
    q.push(2);
    q.push(3);
    
    reversequeue(q);
    
    cout << "Reversed Queue: ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;

    return 0;
}

