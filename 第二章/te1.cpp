#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node*next;
};
Node*p;
void fun()
{
    cout<<p->data<<endl;
}
int main()
{
    p=new Node;
    p->data=100;
    p->next=NULL;

    fun();
}
