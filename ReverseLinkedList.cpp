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

void printReverse(Node *head){
    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        cout<<head->data<<endl;
        return;
    }
    Node *current = head;
    Node *prev = NULL , *succ = head->next;
    while(succ != NULL){
        current->next = prev;
        prev = current;
        current = succ;
        succ = current->next;
    }
    current->next = prev;
    head = current;
    while(head != NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    return;
}

Node *takeinput(){
    int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newnode = new Node(data);
		if (head == NULL)
		{
			head = newnode;
			tail = newnode;
		}
		else
		{
			tail->next = newnode;
			tail = newnode;
		}
		cin >> data;
	}
	return head;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        Node *head = takeinput();
        printReverse(head);
        cout<<endl;
    }
    return 0;
}