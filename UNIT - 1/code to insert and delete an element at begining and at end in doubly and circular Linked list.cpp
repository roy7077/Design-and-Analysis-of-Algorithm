/* code to insert and delete an element at begining and at end in doubly and circular Linked list */

#include <iostream>
using namespace std;

class Node{
    
    public:
    Node* next=NULL;
    Node* pre=NULL;
    int data;

    Node(int data){
        this->data=data;
    }
};

class DoubleCircular{
    
    public:
    Node* head=NULL;
    Node* tail=NULL;
    
    void insert_front(int data)
    {
        Node* newnode=new Node(data);
        
        if(head==NULL)
        {
            head=newnode;
            head->pre=head;
            head->next=head;
            tail=head;
        }
        else
        {
            newnode->next=head;
            head->pre=newnode;
            newnode->pre=tail;
            head=newnode;
        }
    }
    
    void insert_back(int data)
    {
        Node* newnode=new Node(data);
        
        if(head==NULL)
        {
            head=newnode;
            head->pre=head;
            head->next=head;
            tail=head;
        }
        else
        {
            tail->next=newnode;
            newnode->pre=tail;
            newnode->next=head;
            tail=newnode;
        }
    }
    
    void pop_front()
    {
        if(head)
        {
            if(tail==head)
            {
                delete head;
                head=NULL;
                tail=NULL;
                return ;
            }
            Node* temp=head->next;
            Node* last=head->pre;
            
            delete head;
            head=temp;
            head->pre=last;
        
        }
        else
        cout<<"list is empty "<<endl;
    }
    
    void pop_back()
    {
        if(tail)
        {
            if(tail==head)
            {
                delete head;
                head=NULL;
                tail=NULL;
                return ;
            }
            
            Node* temp=tail->pre;
            Node* first=tail->next;
            
            delete tail;
            tail=temp;
            tail->next=first;
            
        }
        else
        cout<<"list is empty "<<endl;
    }
    
    int front()
    {
        if(head)
        return head->data;
        
        cout<<"No element ";
        return -1;
    }
    
    int back()
    {
        if(tail)
        return tail->data;
        
        cout<<"No element ";
        return -1;
    }
    
    
};


int main() 
{
	DoubleCircular list;

	cout<<"Enter 1 to insert an element at front"<<endl;
	cout<<"Enter 2 to insert an element at back"<<endl;
	cout<<"Enter 3 to get front element"<<endl;
	cout<<"Enter 4 to get back element"<<endl;
	cout<<"Enter 5 to delete element from back"<<endl;
	cout<<"Enter 6 to delete element from front"<<endl;
	cout<<"Enter -1 to exit loop"<<endl;
	cout<<endl;
	
	bool flag=0;
	while(1)
	{
	    int ch;
	    cout<<"Enter a choice : ";
	    cin>>ch;
	    
	    switch(ch)
	    {
	        case 1 : cout<<"Enter an element : ";
	                 int n;
	                 cin>>n;
	                 list.insert_front(n);
	                 break;
	                 
	        case 2 : cout<<"Enter an element : ";
	                 int m;
	                 cin>>m;;
	                 list.insert_back(m);
	                 break;
	                 
	        case 3 : cout<<"front element is -> "<<list.front()<<endl;
	                 break;
	        
	        case 4 : cout<<"last element is -> "<<list.back()<<endl;
	                 break;
	       
	        case 5 : list.pop_back();
	                 break;
	        
	        case 6 : list.pop_front();
	                 break;
	       
	        default : flag=1;
	                  break;
	                 
	    }
	    if(flag)
	    break;
	}
	
	return 0;
}