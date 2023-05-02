#include <iostream>
using namespace std;

class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};

Node *appendLastNToFirst(Node *head, int n)
{
	Node *temp = head, *t = head;
    if(head==NULL || n==0 || head->next==NULL){
        return head;
    } 
     
    
	int i = -n; 
    
	while(temp->next!=NULL){
		
        if(i>=0){                           
			t = t->next;
		}
		temp = temp ->next;
		i++;
	} 
    
	temp->next = head;
	head = t->next;
	t->next = NULL;                         
	return head;
}

Node *takeinput()
{
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

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head = takeinput();
		int n;
		cin >> n;
		head = appendLastNToFirst(head, n);
		print(head);
	}
	return 0;
}