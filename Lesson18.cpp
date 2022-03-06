#include<bits/stdc++.h>
using namespace std;
bool ispair(char a , char b)
{
    if(a=='(' && b==')')
    {
        return true;
    }
     if(a=='[' && b==']')
    {
        return true;
    }
     if(a=='{' && b=='}')
    {
        return true;
    }
     else
    {
        return false;
    }
}
bool balance (string s)
{
    char m;
    stack<char>st;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='{' || s[i]=='[' || s[i]== '(')
            {
                st.push(s[i]);
            }
            else if(s[i]=='}' || s[i]==']' || s[i]==')')
            {
               m=st.top();

               if(st.size()==0 || !ispair(m,s[i]))
               {
                   return false;
               }
               else
               {
                   st.pop();
               }
            }
    }
    if(st.size()==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
   string s;
   cin >>s;
   bool d= balance(s);
   if(d==true)
   {
       cout<<"balanced"<<endl;

   }
   else
   {
       cout<<"not balanced"<<endl;
   }
}
