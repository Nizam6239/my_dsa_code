#include <iostream>
#include <climits>
using namespace std;

class StackUsingArray {
    int *data; //Array used store the data
    int capacity; //Capcity of the Array
    int nextIndex; //Current size of the Array
    public:
    StackUsingArray(int totalsize){
        data = new int[totalsize];
        nextIndex = 0;
        capacity = nextIndex;
    }
    // Size of the Stack
    int size(){
        return nextIndex;
    }
    // Stack is Empty or not
    bool isEmpty(){
        if(nextIndex == 0){
            return true;
        }
        else{
            return false;
        }
    }
    // Adding element of the Stack;
    void push(int element){
        if(nextIndex == capacity){
            int *newData = new int[2*capacity];
            for (int i = 0; i < capacity; i++)
            {
                newData[i] = data[i];
            }
            capacity *= 2;
            delete []data;
            data = newData;
        }
        data[nextIndex] = element;
        nextIndex++;
    }
    // void push(int element){
    //     data[nextIndex] = element;
    //     nextIndex++;
    // }

    // Deleting the element in the Stack
    int pop(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }
    // Top element in the Stack;
    int top(){
        if(isEmpty()){
            cout<<"Stack is Empty"<<endl;
            return INT_MIN;
        }
        return data[nextIndex-1];
    }
};