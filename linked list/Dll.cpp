#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node*next;
  Node*back;
  Node(int data1,Node*next1,Node*back1){
    data=data1;
    next=next1;
    back=back1;


  } 
  Node(int data1){
    data=data1;
    next=nullptr;
    back=nullptr;
  }

};
Node* covertarrytoDLL(vector<int> v){
  Node* head=new Node(v[0]);
  Node*prev=head;
  for(int i=1;i<v.size();i++){
    Node*temp=new Node(v[i],nullptr,prev);
    prev->next=temp;
    prev=temp;
  }
  return head;

}
Node* print(Node*head){
  Node*temp=head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;

}
int main(){
  vector<int> v={1,2,3,4,5};
  Node*head=covertarrytoDLL(v);
  print(head);


}