#include<bits/stdc++.h>
using namespace std;

class node{
public:
int data;
node* next;
node(int val){
    data=val;
    next=NULL;
}
};
void insertail(node* &head,int k){
    node* n= new node(k);
  
    if(head==NULL){
        head=n;
        return ;
    }
      node* temp=head;
    while (temp->next!=NULL)
    {
      temp=temp->next;
    }
    temp->next=n;

    
}
void dispaly(node *head){
    node* temp=head;
    while (temp!=NULL)
    {
         cout<<temp->data<<"->";
         temp=temp->next;
    }
    cout<<endl;
}
void makecycle(node* &head,int pos){
    node* temp=head;
    int c=0;
    node* findnode;
    while (temp->next!=NULL )
    {
       if(c==pos){
           findnode=temp;
       }
       temp=temp->next;
       c++;
    }
    temp->next=findnode;

    
}
bool detectcycle(node* &head){
    node* fast=head;
    node* slow=head;
    while (fast!=NULL && fast->next!=NULL)
    {
      fast=fast->next->next;
      slow=slow->next;
      if(fast==slow){
          return true;
      }
    }
    return false;
    
}
void removecycle(node* &head){
 node* fast=head;
    node* slow=head;
    do
    {
       slow=slow->next;
       fast=fast->next->next;
    }while (slow!=fast);
    fast=head;
    while (slow->next!=fast->next)
    {
        slow=slow->next;
        fast=fast->next;
    }
    slow->next=NULL;
}
int main(){
    node* head =NULL;
    insertail(head,1);
    insertail(head,2);
    insertail(head,3);
    insertail(head,4);
    insertail(head,5);
    insertail(head,6);
    dispaly(head);
    makecycle(head,3);
  if(detectcycle(head)){
      cout<<"remove"<<endl;
      removecycle(head);
      dispaly(head);
  }

}