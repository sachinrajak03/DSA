#include <iostream>
#include<queue>
using namespace std;

int main() {
    queue<int>q;
    q.push(5);
    cout<<"size of queue"<<q.size()<<endl;
    if(q.empty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        cout<<"queue is not empty"<<endl;
    }
    q.pop();
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<"front element of queue"<<q.front()<<endl;
    cout<<"rear element of quueue"<<q.back()<<endl;
    return 0;
}
