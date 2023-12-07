#include "QueueUsingArray.cpp"

int main(){
    Queue q(5);
    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);
    cout<<q.dequeue()<<endl;
    cout<<q.front()<<endl;
}