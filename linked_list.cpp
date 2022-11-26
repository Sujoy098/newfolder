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
        
        //destructor
        ~Node()
        {
            int value = this->data;
            //if memory is absent
            if(this->link!=NULL)
            {
                this->link=NULL;
                delete link;
            }
            cout<<"Memory is free for node with data "<<value<<endl;
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

int list_length(Node*&head)
{
    int count=0;
    Node *temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->link;
    }
    return count;
}
void insertAtPosition(Node*&head,Node*&tail,int position,int data)
{
    if(position==1){
        insertAtHead(data,head,tail);
        return;
    }
    else if(position<=0 || position>=list_length(head) + 1 )
    {
        cout<<"Invalid position"<<endl;
        return;
    }
   
    int cnt=1;
    Node *temp=head;
    while(cnt<position-1)
    {
        temp=temp->link;
        cnt++;
    }
    if(temp->link==NULL)
    {
        insertAtTail(data,head,tail);
    }
    
    Node *node1 =new Node(data);
    node1->link=temp->link;
    temp->link=node1;
}

void deleteBeg(Node*&head)
{
    if(head==NULL)
    {
        cout<<"No Element is Present";
        return;
    }
    else
    {
        Node *temp =head;
        head= head->link;
        delete temp;
    }
}

void deleteTail(Node*&head,Node*&tail)
{
    if(head==NULL &&  tail==NULL)
    {
        cout<<"No element is present";
        return;
    }
    else
    {
        delete tail;
        tail->link=NULL;
        Node* temp=head;
        while(temp->link->link!=NULL)
        {
            temp=temp->link;
        }
        temp->link=NULL;
        tail=temp;
        
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        Node *head=NULL;
        Node *tail=NULL;
        
        print(head);
        
         Node *node1 = new Node(4);
         head= node1;
         tail= node1;
        
        print(head);
        insertAtHead(14,head,tail);
        
        print(head);
    
     	 insertAtHead(25,head,tail);
     	 insertAtHead(96,head,tail);
      	 insertAtHead(87,head,tail);
     
     	print(head);
        
        insertAtTail(45,head,tail);
        insertAtTail(25,head,tail);
        insertAtTail(66,head,tail);
        insertAtTail(78,head,tail);

   		  print(head);
//        insertAtPosition(head,tail,4,22);
//        insertAtPosition(head,tail,32,5);
//        
//        deleteBeg(head);
//        print(head);
//        
//        deleteTail(head,tail);
//        print(head);
    }
}
