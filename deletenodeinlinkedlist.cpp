#include <iostream>
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

Node *deleteNode(Node *head,int pos){
    if (head==NULL){
        return head;
    }
    if(pos==0){
        return head->next;
    }
    int count = 0;
    Node *temp = head;
    while(temp != NULL && count< pos-1){
        temp = temp->next;
        count++;
    }
    if (temp==NULL){
        return head;
    }
    if (temp->next ==NULL)
        temp->next->next;
        temp->next=temp->next->next;
    return head;
}

Node *takeinput(){
    int data;
    cin>>data;
    Node *head = NULL,*tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head==NULL)
        {
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

void print(Node *head){
    Node *temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){
        Node* head = takeinput();
        print(head);
        int pos;
        cin>>pos;
        head =deleteNode(head,pos);
        print(head);
}