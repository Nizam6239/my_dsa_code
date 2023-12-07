#include <iostream>
using namespace std;

class Queue{
    int *data;
    int nextIndex;
    int firstIndex;
    int size;
    int capacity;
    public:
    Queue(int S){
        data = new int[S];
        nextIndex = 0;
        firstIndex = -1;
        size = 0;
        capacity = S;
    }
    int getSize(){
        return size;
    }
    bool isEmpty(){
        return size == 0;
    }
    void enqueue(int element){
        if(size == capacity){
            cout<<"Stack is full"<<endl;
        }
        data[nextIndex] = element;
        nextIndex = (nextIndex + 1) % capacity;
        if(firstIndex == -1){
            firstIndex = 0;
        }
        size++;
    }
    int dequeue(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
        }
        int ans = data[firstIndex];
        firstIndex = (firstIndex + 1) % capacity;
        size--;
        return ans;
    }
    int front(){
        if(isEmpty()){
            return -1;
        }
        return data[firstIndex];
    }
};