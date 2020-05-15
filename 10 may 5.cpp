#include <iostream>
using namespace std;
typedef struct nod
{
struct nod *prev;
int data;
struct nod *next;
}
node;
void insertdata(int);
void compute();
void display();
node *front = NULL;
node *end=NULL;
int main() 
{ 
int x,ch;
while(true)
{
cout<<"\nEnter An Element To be inserted : ";
cin>>x;
insertdata(x);
cout<<"\nTo Enter another element enter 1 else enter any other number : ";
cin>>ch;
if(ch!=1)
{
break;
}
}
display();
compute();
display();
} 
void compute()
int k;
cout<<"\nEnter the position of the element to be swapped:";
cin>>k;
node *front_ptr=front;
node *back_ptr=front;
node *p1,*p2,*q1,*q2;
while((back_ptr->next)!=NULL)
{
back_ptr=back_ptr->next;
}
for(int i=1;i<k;i++)
{
front_ptr=front_ptr->next;
back_ptr=back_ptr->prev;
}
node *t1=front_ptr;
node *t2=back_ptr;
p1=front_ptr->prev;
p2=front_ptr->next;
q1=back_ptr->prev;
q2=back_ptr->next;
p1->next=t2;
p2->prev=t2;
t2->prev=p1;
t2->next=p2;
q1->next=t1;
q2->prev=t1;
t1->next=q2;
t1->prev=q1;
}
void insertdata(int x)
{
node *temp;
temp = new node();
temp->data = x;
temp->prev = end;
temp->next = NULL;
if(end == NULL)
{
 front = temp;
  front->next=NULL;
  front->prev=NULL;
  end=temp;
 } 
else
{
	end->next = temp;
	node *p=end;	
	end=temp;
	end->prev=p;
	end->next=NULL;
}
}
void display()
{
node *t;
t = front;
while(t != NULL)
{
cout<<t->data<<endl;
t = t->next;
}
}
