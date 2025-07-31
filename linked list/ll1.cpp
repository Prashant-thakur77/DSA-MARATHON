#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
  Node(int data1,Node*next1){
    data=data1;
    next=next1;
  }
  Node(int data1){
    data=data1;
    next=nullptr;
  }
};
Node* deletehead(Node* head){
  Node* temp=head;
  head=head->next;
  free(temp);
  return head;
}
Node *inserthead(Node*head,int val){
  Node*temp=new Node(val,head);
  return temp;
}


Node* convertArray2LL(vector<int> &v){
 Node* head = new Node(v[0]);
 Node* mover=head;
 for(int i=1;i<v.size();i++){
  Node* temp=new Node(v[i]);
  mover->next=temp;
  mover=temp;
 }
 return head;

}
int main(){
  vector<int> v={10,2,3,4,5};
  Node* head=convertArray2LL(v);
  head=inserthead(head,10);
  head=deletehead(head);
  Node* temp=head;
  
  
  while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;


  return 0;



}
