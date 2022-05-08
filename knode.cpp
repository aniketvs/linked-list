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
void display(node* head){
    node* temp=head;
    while (temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
    
    

}
node* reverseknod(node* &head,int kt){
    node* nxt;
    node* current =head;
    node* prev=NULL;
    int c=0;
    while (current!=NULL && c<kt)
    {
         nxt=current->next;
          current->next=prev;
          prev=current;
          current=nxt;
          c++;
    }
    if(nxt!=NULL){
        head->next=reverseknod(nxt,kt);
    }
    return prev;
}
int main(){
    node* head=NULL;
    int k;
   
       insertail(head,1);
       insertail(head,2);
       insertail(head,3);
       insertail(head,4);
       insertail(head,5);
       insertail(head,6);
    display(head);
    node* newhead= reverseknod(head,3);
    display(newhead);


}