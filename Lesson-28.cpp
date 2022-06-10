#include<bits/stdc++.h>
using namespace std;
struct node{
int data;
node* left;
node*right;
};
node * newnode(int data)
{
    node * newnode= new node();
    newnode->data=data;
    newnode->left=NULL;
    newnode->right=NULL;
    return newnode;

}
node * Insert(node* root, int data)
{
    if(root==NULL)
    {

        root=newnode(data);


    }
    else if(data <=root->data)
    {
        root->left=Insert(root->left,data);

     }
     else{
        root->right=Insert(root->right,data);
     }
    return root;
}
bool searchbst(node * root, int d)
{
    if(root==NULL)return false;
        else if(root->data==d)return true;
      else if (root->data>=d)return searchbst(root->left,d);
    else return searchbst(root->right,d);


}
int main()
{
    node *root=NULL;
    while(1)
    {
      cout<<"1.add data"<<endl<<"2. search tree"<<endl;
      int h;
      cin>>h;
      if(h==1)
      {
         int d;
         cin>>d;

         root=Insert(root,d);
      }
      else if(h==2)
      {
        int d;
        cin>>d;
        bool state=searchbst(root,d);
        cout<<state<<endl;

      }

    }


}
