#include <iostream>
using namespace std;

class Node{
  public:
    int data;
    Node *next;
    Node(int data){
      this->data = data;
      this->next = NULL;
    }
};

class Queue {
    Node* head;
    Node* tail;
    int size;
    public:
      Queue(){
        head = NULL;
        tail = NULL;
        size = 0;
      }
      
      int getsize(){
        return size;
      }
      bool isEmpty(){
        return size == 0;
      }
      void enqueue(int element){
        Node* newNode = new Node(element);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            size++;
        }
        else{
          tail->next = newNode;
          tail = newNode;
          size++;
        }
      }
      int dequeue(){
        if(head == NULL){
          return -1;
        }
        int ans = head->data;
        Node* p = head;
        head = head->next;
        delete p;
        size--;
        return ans;
      }
      int front(){
        if(head == NULL){
          return -1;
        }
        return head->data;
      }
};
