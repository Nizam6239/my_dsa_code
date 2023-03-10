#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

Node* insertNode(Node *head, int i, int data){
    if(head ==NULL){
        return NULL;
    }
    if(i==0){
        Node* temp = new Node(data);
        temp->next = head;
        return temp;
    }
    if(i==1){
        Node *temp = new Node(data);
        temp->next = head->next;
        head->next = temp;
        return head;
    }
    Node* curr = insertNode(head->next,i-1,data);

    return head;
}

Node *takeinput(){
    int data;
    cin>>data;
    Node *head = NULL,*tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
        cin>>data;
    }
    return head;
}

void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        Node *head = takeinput();
        print(head);
        int pos,data;
        cin>>pos>>data;
        head = insertNode(head,pos,data);
        print(head);
    }
}