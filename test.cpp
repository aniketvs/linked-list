


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
void inserttail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head =n;
        return;
    }
    node* temp=head;
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
void dispaly(node *head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
bool search(node *head,int k){
    node* temp=head;
    while (temp!=NULL)
    {
        if(temp->data==k) return true;
        temp=temp->next;
       
    }
    return false;
    
}
void deletehead(node* &head){
     node* temp=head->next;
     head->next=NULL;
     head=temp;
}
node * deletetail(node* &head){
   
    if (head == NULL)
        return NULL;
 
    if (head->next == NULL) {
        delete head;
        return NULL;
    }
    node* temp=head;
    while (temp->next->next!=NULL)
    {
       temp=temp->next;
    }
    delete(temp->next);
    temp->next =NULL;
    return head;
    

    
}
node * deletemid(node * &head,int k){
      node* temp=head;
   node * prev;
   if(head->data==k){
     deletehead(head);
       return head;
   }
    while (temp!=NULL)
    {
        if(temp->data==k) 
        {
            break;
        }
        prev=temp;
        temp=temp->next;
        
    }
    prev->next=temp->next;

    delete(temp);
    return head;

}
int main(){
   node* head=NULL;
   inserttail(head,1);
   inserttail(head,2);
   inserttail(head,3);
 
   inserttail(head,4);
   inserthead(head,0);
   dispaly(head);
   deletehead(head);
   deletemid(head,1);
    deletetail(head);
  dispaly(head);
}