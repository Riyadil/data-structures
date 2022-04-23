#include<bits/stdc++.h>
using namespace std;
bool isop(char c)
{
    //cout<<"in isop function"<<endl;
    if(c=='+'|| c=='-'|| c=='*' || c=='/')
    {
            //cout<<"returning true;"<<endl;
        return true;
    }
        //cout<<"returning false;"<<endl;
    return false;
}
bool isnum(char v)
{
    //cout<<"in isnum function"<<endl;
    if(v>='0' && v<='9')
    {
        //cout<<"returning true;"<<endl;
        return true;
    }
        //cout<<"returning false;"<<endl;
    return false;
}
int dooper(char d, int op2, int op1)
{
    //cout<<"in dooper function"<<endl;
    if(d=='+')
    {

       return op2+op1;
    }
    else if(d=='-')
    {
      return op1-op2 ;
    }
    else if(d=='*')
    {
       return op1*op2 ;
    }
    else if (d=='/')
    {
         return op1/op2 ;
    }
    return 0;
}

int evaluation (string d)
{
    //cout<<"in evaluation function"<<endl;
    stack<int>st;
    for(int i=0;i<d.size();i++)
    {
        if(d[i]==' ')
        {
            continue;
        }
        else if(isnum(d[i]))
        {
            //cout<< "detecting the integer number"<<endl;
            int sum=0;
            while(isnum(d[i]))
            {
              sum=sum*10+(d[i]-'0');
              i++;
            }
            //cout<<"pushed"<<sum<<endl;
            st.push(sum);
            i--;

        }
        else if(isop(d[i]))
        {
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();
            int res=dooper(d[i],op2,op1);
            //cout<<"pushed"<<res<<endl;
            st.push(res);
        }

    }
    return st.top();
}
int main()
{
   string s="2 3 * 4 5 * + 9 -";
   //cin>>s;

   int res=evaluation(s);
   cout<<res;
// 2 3 * 4 5 * + 9 -


}
