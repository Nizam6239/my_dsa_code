#include <iostream>
using namespace std;

template <typename T>
class Node{
    public:
      T data;
      Node<T> *next;
      Node(T data){
        this->data = data;
        this->next = NULL;
      } 
};

template <typename T>
class StackUsingLL{
    Node<T> *head;
    int size;
    public:
      StackUsingLL(){
        head = NULL;
        size = 0;
      }
      int getSize(){
        return size;
      }
      bool isEmpty(){
        // if(head == NULL){
        //   return true;
        // }
        // else{
        //   return false;
        // }
        return size == 0;
      }
      void push(T element){
        if(size == 0){
          Node<T> *n = new Node<T>(element);
          n->next = NULL;
          head = n;
          size++;
        }
        else{
          size++;
          Node<T> *n = new Node<T>(element);
          n->next = head;
          head = n;
        }
      }
      T pop(){
        if(size == 0){
          return -1;
        }
        size--;
        T ans = head->data;
        head = head->next;
        return ans;
      }
      T top(){
        if(size == 0){
          return -1;
        }
        return head->data;
      }
};