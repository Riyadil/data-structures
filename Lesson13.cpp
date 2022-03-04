#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
typedef struct Node{
int data;
Node* next;
Node* prev;
};
Node* insertb(Node* head, int d)
{
    Node* temp=new Node();
    temp->data=d;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
    temp->next=head;
    head->prev=temp;
    temp->prev=NULL;
    head=temp;
    }

    return head;
}
Node* inserte(Node* head,int d)
{
    Node* temp=new Node();
    temp->data=d;
    temp->next=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
      while(head->next!=NULL)
    {
        head=head->next;
    }
    temp->prev=head;
    head->next=temp;
    }

return head;

}
void print(Node* head)
{
  while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
void reversep(Node* head)
{
while (head->next!=NULL)
{
    head=head->next;
}
while(head!=NULL)
{
    cout<<head->data<<" ";
    head=head->prev;
}
cout<<endl;
}
int main()
{
  Node* head;
  head=NULL;
  int d;
  int option;
  while(1)
  {

      cout<<"1.Insert at head"<<endl<<"2.insert at tail"<<endl<<"3.print"<<endl<<"4.reverse print"<<endl;
      cin>>option;
      if(option==4)
      {
          reversep(head);

      }
      else if(option==1)
      {
          cout<<"insert data"<<endl;
          cin>>d;
         head=insertb(head,d);
      }
      else if(option==2)
      {
          cout<<"insert data"<<endl;
          cin>>d;
          head=inserte(head,d);
      }
      else if(option==3)
      {
         print(head);
      }
  }
}
