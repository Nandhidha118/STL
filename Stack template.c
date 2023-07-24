#include <iostream>
#include<stack>
using namespace std;
     stack<int> num;

template<typename T>
T push()
{
int n;
    cout<<"enter the number of  elements to be inserted"<<"\n";
    cin>>n;
    cout<<"enter the elements"<<endl;
   for(int i=0;i<n;i++)
   {
       int ele;
       cin>>ele;
       num.push(ele);
       cout<<"\npushed element:"<<num.top()<<endl;
   }


}
void pop()
{
    int n;
    cout<<"\nenter the number of  elements to be popped\n"<<"\n";
    cin>>n;
    if(num.empty())
    {
        cout<<"\nStack is empty,element cannot be poped\n";
    }
    else{
   for(int i=0;i<n;i++)
   {
       cout<<"\npoped element:"<<num.top();
       num.pop();
   }
    }
}
void isEmpty()
{
    if(num.empty())
    {
        cout<<"\nstack is empty\n";
    }
    else{
        cout<<"\nelements are in stack\n";
    }
}
int top()
{
   return num.top();
}
int main()
{
     int n=5;
    push<int>();
    pop();
    isEmpty();
    int g=top();
    cout<<"\nelement in the top: "<<g;

    return 0;
}
