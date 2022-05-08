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
void insertail(node* &head,int val){
    node *n=new node(val);
     if(head==NULL){
         head=n;
         return;
     }
     node * temp=head;
     while (temp->next!=NULL)
     {
         temp=temp->next;
     }
     temp->next=n;

}
void inserthead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;


}
void display(node* head){
    node* temp=head;
    while (temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
    
    

}
node * reverselink(node* &head){
    node * prev=NULL;
    node * current=head;
    node * nexter;
    while (current!=NULL)
    {nexter=current->next;
       current->next=prev;
       prev=current;
       current=nexter;
      
    }
    head=prev;
    return head;
    
}
node * reverseknode(node* &head,int k){
     node* temp=head;
    while (temp!=NULL)
    {
        if(temp->data==k) {
            break;
        }
        temp=temp->next;
       
    }
    node * prev=NULL;
    node * current=temp;
    node * nexter;
    while (current!=NULL)
    {nexter=current->next;
       current->next=prev;
       prev=current;
       current=nexter;
      
    }
    node* newtemp =head;
    while(newtemp->next!=temp){
        newtemp=newtemp->next;
    }
   newtemp->next=prev;
    return head;
    
}
int main(){
    node* head=NULL;
    int k;
    for (int  i = 0; i < 5; i++)
    {
       cin>>k;
       insertail(head,k);
       
    }
    reverseknode(head,3);
    display(head);


}