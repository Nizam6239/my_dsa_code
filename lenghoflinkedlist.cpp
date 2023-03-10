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

int length(Node *head){
    int count = 0;
    while(head != NULL){
        head = head->next;
        count++;
    }
    return count;
}

Node *takeInput(){
    int data;
    cin>>data;
    Node *head = NULL, *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head ==NULL){
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin>>data;
    }
    return head;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        Node *head = takeInput();
        cout<<length(head)<<endl;
    }
}