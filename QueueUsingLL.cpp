#include "Queue.cpp"

int main(){
    Queue q;
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);
    cout<<q.front()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.front()<<endl;
    cout<<q.getsize()<<endl;
    cout<<q.isEmpty()<<endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout<<q.isEmpty()<<endl;
}