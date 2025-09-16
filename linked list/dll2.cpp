#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node*next;
  
  Node(int data1,Node*next1){
    data=data1;
    next=next1;
    

  } 
  Node(int data1){
    data=data1;
    next=nullptr;
   
  }

};
Node* covertarrytoDLL(vector<int> v){
  Node* head=new Node(v[0]);
  Node*temp1=head;
  for(int i=1;i<v.size();i++){
    Node*temp=new Node(v[i]);
    temp1->next=temp;
    temp1=temp1->next;
  }
  return head;

}
void print(Node* &head){
  Node*temp=head;
  while(temp!=NULL){
      cout<<temp->data<<"->";
      temp=temp->next;
  }
  cout<<"NULL"<<endl;


}
void add_at_start(Node* &head,int data){
  Node*newNode=new Node(data,head);
  head=newNode;
  
}
void add_at_last(Node* &head,int data){
  Node*temp=head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  Node*newNode=new Node(data);
  temp->next=newNode;
}

void add_at_pos(Node* &head,int data,int pos){
  Node*temp=head;
  pos--;
  while(temp->next!=NULL){
    pos--;
    if(pos==0)break;
    temp=temp->next;
  }
  if(pos!=0)return;
  Node*newNode=new Node(data,temp->next);
  temp->next=newNode;
}




int main(){
  vector<int> v={1,2,3,4,5};
  Node*head=covertarrytoDLL(v);
  add_at_start(head,3);
  add_at_last(head,9);
  add_at_pos(head,90,9);
  print(head);
  




}