/* Code to push & pop and check isempty , isfull and return top element in stack using template*/
#include <iostream>
using namespace std;

//stack class
class Stack{
    private:
    int cap;
    int* arr=NULL;
    int i;
    
    public:
    Stack(int cap)
    {
        arr=new int[cap];
        this->cap=cap;
        i=0;
    }
    
    //push function
    void push(int n)
    {
        if(i==cap)
        {
            cout<<"Cannot insert an element , Stack is full"<<endl;
            return ;
        }
        
        arr[i]=n;
        i++;
    }
    
    //pop function
    int pop()
    {
        if(isEmpty())
        {
            cout<<"Cannot pop an element , Stack is empty ";
            return -1;
        }
        
        return arr[--i];
    }
    
    //top function
    int top()
    {
        if(isEmpty())
        {
            cout<<"there is no element in stack to return top element ";
            return -1;
        }
        
        return arr[i-1];
    }
    
    //isEmpty function
    bool isEmpty()
    {
        return i==0;
    }
    
    //isFull function
    bool isFull()
    {
        return i==cap;
    }
};


int main()
{
    
    cout<<"Enter size of stack - ";
    int n;
    cin>>n;
    cout<<endl;
    Stack st(n);
    
    cout<<"Enter 1 to push an element"<<endl;
    cout<<"Enter 2 to pop() an element"<<endl;
    cout<<"Enter 3 to get top element"<<endl;
    cout<<"Enter 4 to check is stack empty"<<endl;
    cout<<"Enter 5 to check is stack full"<<endl;
    cout<<"to exit the loop enter -1"<<endl;
    cout<<endl;
    
    bool flag=0;
    while(1)
    {
        cout<<"Enter your choice - ";
        int ch;
        cin>>ch;
        switch(ch)
        {
            case 1 : int n;
                     cout<<"Enter an element to push in a stack - ";
                     cin>>n;
                     st.push(n);
                     break;
            
            case 2 : cout<<st.pop()<<endl;
                     break;
                     
            case 3 : cout<<st.top()<<endl;
                     break;
            
            case 4 : if(st.isEmpty())
                     cout<<"stack is empty"<<endl;
                     else
                     cout<<"stack is not empty"<<endl;
                     break;
            
            case 5 : if(st.isFull())
                     cout<<"stack is Full"<<endl;
                     else
                     cout<<"stack is not Full"<<endl;
                     break;
                     
            default : 
                     flag=1;
                     break;
        }
        
        if(flag)
        break;
    }
    return 0;
}



