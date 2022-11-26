#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node *link;
        
        // constructor
        Node(int data)
        {
            this->data=data;
            this->link=NULL;
        }
};
void print(Node* &head)
{
    if(head == NULL)
    {
        cout<<"No Element Present"<<endl;
        return;
    }
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->link;
    }
    cout<<"NULL";
    cout<<endl;
}

Node* insertAtHead(int data,Node* &head,Node* &tail)
{
    //new node creation 
    Node* temp = new Node(data);
    if(head==NULL && tail==NULL)
    {
        head=temp;
        tail=temp;
        return head;
    }
    temp->link=head;
    head=temp;
    return head;
}
Node* insertAtTail(int data,Node* &head,Node* &tail)
{
    //new node creation 
    Node* temp = new Node(data);
    if(head==NULL && tail==NULL)
    {
        head=temp;
        tail=temp;
        return head;
    }
    tail->link=temp;
    tail=temp;
    return head;
}
int main()
{
    int t,head,tail;
    cin>>t;
    while(t--)   
	{
		Node *head=NULL;
        Node *tail=NULL;
        
	 
		  //print(head);
        
        //Node *node1 = new Node(4);
        // head= node1;
        // tail= node1;
        
        //print(head);
       insertAtHead(14,head,tail);        
       print(head);
//        
        insertAtHead(25,head,tail);
        insertAtHead(96,head,tail);
        insertAtHead(87,head,tail); 
         print(head);   
         insertAtTail(45,head,tail);
        insertAtTail(25,head,tail);
        insertAtTail(66,head,tail);
        insertAtTail(78,head,tail);
         print(tail);
        }

}
