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
  if(head==NULL)return head;
  Node* temp=head;
  head=head->next;
  free(temp);
  return head;
}
Node *inserthead(Node*head,int val){
  Node*temp=new Node(val,head);
  return temp;
}
Node* removeTail(Node*head){
  if(head==NULL || head->next==NULL) return NULL;
  Node*temp=head;
  while(temp->next->next!=NULL){
    temp=temp->next;
  }
  free(temp->next);
  temp->next=nullptr;
  return head;
}
Node* deletek(Node* head,int k){
  if(head==NULL)return NULL;
  if(k==1){
    Node*temp=head;
    head=head->next;
    free(temp);
    return head;
  }
  int cnt=0;
  Node* prev=NULL;
  Node*temp=head;
  while(temp!=NULL){
    cnt++;
    if(cnt==k){
      prev->next=prev->next->next;
      free(temp);
      break;
    }
    prev=temp;
    temp=temp->next;
  }
  return head;
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
Node* insertk(Node* head,int el,int k){
  if(head==NULL){
    if(k==1){
      return new Node(el,head);

    }
    else return NULL;
  }
  if(k==1){
    Node* temp=head;
    Node* newNode=new Node(el,head);
    return newNode;
  }
  int cnt=0;
  Node*temp=head;
  while(temp!=NULL){
    cnt++;
    if(cnt==k-1){
      Node*x=new Node(el);
      x->next=temp->next;

      temp->next=x;
      break;

    }
    temp=temp->next;
  }
  return head;


}
Node* insertbeforevalue(Node* head,int el,int val){
  if(head==NULL){
     return NULL;
  }
  if(head->data==val){
    Node* temp=head;
    Node* newNode=new Node(el,head);
    return newNode;
  }
  int cnt=0;
  Node*temp=head;
  while(temp->next!=NULL){
    if(temp->next->data==val){
      Node* x=new Node(el,temp->next);
      temp->next=x;
      break;

    }
    temp=temp->next;
  }
   
    
  
  return head;


}
int main(){
  vector<int> v={100,2,3,4,5,8};
  Node* head=convertArray2LL(v);
  
  //head=inserthead(head,10);
  //head=deletehead(head);
 // head=removeTail(head);
  //head=deletek(head,4);
   head=insertk(head,77,1);
   head=insertbeforevalue(head,44,5);
  Node* temp=head;
  
  
  while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
  cout<<endl;


  return 0;



}
