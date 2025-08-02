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
Node*deletehead(Node*head){
  if(head  ==NULL ||head->next==NULL)return NULL;
  Node*prev=head;
  head=head->next;
  head->back=nullptr;
  prev->next=nullptr;
  free(prev);
  return head;
  

}
Node*deletetail(Node*head){
  if(head==NULL || head->next==NULL)return NULL;
  Node*temp=head;
  while(temp->next!=NULL){
    
    temp=temp->next;
  }
  Node* prev=temp->back;
  prev->next=nullptr;
  temp->back=nullptr;
  free(temp);
  return head;



  
}
Node*deletek(Node*head,int k){
  if(head==NULL) return NULL;
  int cnt=0;
  Node*temp=head;
  while(temp!=NULL){
    cnt++;
    if(cnt==k)break;
    temp=temp->next;
    
  }
  Node*prev=temp->back;
  Node*front=temp->next;
  if(front==NULL && prev==NULL){
    delete head;
    return NULL;
  }
  else if(prev==NULL){
    head=deletehead(head);
    

  }
  else if(front==NULL){
    head=deletetail(head);
   
  }
  else{
    prev->next=temp->next;//(prev->next=front)
    front->back=temp->back;//(front->back=prev)
    temp->next=nullptr;
    temp->back=nullptr;
    free(temp);
    
  }
  return head;
  

}
void deleteNode(Node*temp){
  Node*prev=temp->back;
  Node*front=temp->next;
  if(front==NULL){
    prev->next=nullptr;
   
    temp->back=nullptr;
    free(temp);
    return;


  }
  prev->next=front;
  front->back=prev;
  temp->next=nullptr;
  temp->back=nullptr;
  free(temp);
  

}
Node* insertHead(Node*head,int val){
  Node*newhead=new Node(val,head,nullptr);
  head->back=newhead;
  return newhead;
}




int main(){
  vector<int> v={1,2,3,4,5};
  Node*head=covertarrytoDLL(v);
  //head=deletehead(head);
  //head=deletetail(head);
  //head=deletek(head,2);
  //deleteNode(head->next->next->next->back->back->next);
  head=insertHead(head,10);
  print(head);


}