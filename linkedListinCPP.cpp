#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};
void traversal(node *head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main()
{
    int ar[100];
    for(int i=0;i<10;i++)
        ar[i]=i;
    node *head;
    node *x=new node(ar[0]);
    head=x;
    for(int i=1;i<10;i++)
    {
        node *z=new node(ar[i]);
        x->next=z;
        x=z;
    }
    traversal(head);
    return 0;
}
