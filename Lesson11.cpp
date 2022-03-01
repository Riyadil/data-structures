#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
typedef struct Node
{
    int data;
    Node* next;
};



Node* insertn(Node* head,int d,int pos)
{

    Node *temp=new Node();
    temp->data=d;
    temp->next=NULL;
    if(pos==1)
    {
        temp->next=head;
        head=temp;
    }
    else
    {
        Node* temp2=head;
        for(int i=0; i<pos-2; i++)
        {
            temp2=temp2->next;
        }
        temp->next=temp2->next;
        temp2->next=temp;
    }



    return head;
}
void print(Node* head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}
Node* deleten(Node* head, int no, int pos)
{
    Node* temp1=head;
    if(pos==1)
    {
        head=temp1->next;
    }
    else
    {
        Node* before;
        for(int i=1; i<pos; i++)
        {
            before=temp1;
            temp1=temp1->next;
        }
        before->next=temp1->next;

    }
    return head;
}

Node* reversell(Node* cur , Node*prev , Node*next)
{
    if(cur==NULL)
    {
        cur=prev;
        return cur;
    }


        next=cur->next;
        cur->next=prev;
        prev=cur;
        cur=next;
        reversell(cur,prev,next);


}
void forwardp(Node* head)
{
    if(head==NULL)
    {
        cout<<endl;
        return;
    }

    cout<<head->data<<" ";

    forwardp(head->next);

}
void backwardp(Node* head)
{
    if(head==NULL)
    {
        return;

    }
    backwardp(head->next);
    cout<<head->data<<" ";

}


int main()
{
    Node *head;
    int no;
    int pos;
    int option;
    head =NULL;
    while(1)
    {
        cout<<"1. insert at nth position"<<endl<<"2.print"<<endl<<"3.delete node"<<endl<<"4.reverse ll"<<endl<<"5.recursive forward print"<<endl<<"5.recursive backward print"<<endl;
        cout<<"select an option"<<endl;

        cin>>option;
        if(option==1)
        {
            cout<<"Enter data"<<endl;
            cin>>no;
            cout<<"enter position"<<endl;
            cin>>pos;
            head=insertn(head,no,pos);
        }
        else if(option==2)
        {
            print(head);
        }
        else if(option==3)
        {
            cout<<"enter position"<<endl;
            cin>>pos;
            head=deleten(head,no,pos);
        }
        else if(option==4)
        {
            Node *cur=head;
    Node* prev=NULL;
    Node*next=NULL;
            head=reversell(cur,prev,next);
        }
        else if(option==5)
        {
            forwardp(head);
        }
        else if(option==6)
        {
            backwardp(head);
            cout<<endl;
        }

    }




}
