#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
typedef struct Node
{
    int data;
    Node* next;
};

Node *head;

void insertb(int d)
{
    Node *temp=new Node();
    temp->data=d;
    temp->next=NULL;
    if(head!=NULL)
    {
      temp->next=head;
    }
    head=temp;
}
void print()
{
   Node *temp=head;
   while(temp!=NULL)
   {
       cout<<temp->data<<" ";
       temp=temp->next;

   }
   cout<<endl;
}


int main()
{
int no;
int option;
 head =NULL;
 while(1)
 {
  cout<<"1. insert at beginning"<<endl<<"2.print"<<endl;
 cout<<"select an option"<<endl;

 cin>>option;
 if(option==1)
 {
   cout<<"Enter data"<<endl;
   cin>>no;
   insertb(no);
 }
 else if(option==2)
 {
   print();
 }

 }




}
