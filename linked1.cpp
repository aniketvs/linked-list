#include <bits/stdc++.h>
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
void inserthead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;


}

int main(){
node* head = NULL;
insertail(head,5);
insertail(head,4);
insertail(head,3);
insertail(head,6);
int k;
for (int  i = 0; i < 5; i++)
{
    cin>>k;
    inserthead(head,k);
}

display(head);


}