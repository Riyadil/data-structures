#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
};
class Stack{
Node* top;
public:
    Stack()
    {
        top=NULL;
    }
    void push(int x)
    {
        Node* temp=new Node();
        temp->data=x;
        temp->next=NULL;
        if(top==NULL)
        {
            top=temp;
        }
        else
        {
            temp->next=top;
            top=temp;
        }
    }
    void pop()
    {
      if(top==NULL)
      {
          cout<<"stack empty"<<endl;
      }
      else
      {
          Node* temp=top;
          top=top->next;
          delete temp;
      }
    }
    bool isEmpty()
    {
        if(top==NULL)
        {
            return true;
        }
        return false;
    }
    void print()
    {
       Node* temp=top;
       while(temp!=NULL)
       {
           cout<<temp->data<<" ";
           temp=temp->next;
       }
       cout<<endl;
    }



};
int main()
{
   Stack s;
   s.push(2);
   s.print();
  s.push(3);
  s.push(4);
  s.push(5);
  s.print();
  s.pop();
  s.pop();
  s.print();
}
