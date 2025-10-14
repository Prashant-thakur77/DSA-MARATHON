#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007
class Node{
  public:
  
  Node* next;
  int data;
  Node(int data1){
    data=data1;
    next=nullptr;
    
  }
};

class QUEUE{
  public:
  Node* front;
  Node* rear;
  int currSize=0;
  
  QUEUE(){
    front=nullptr;
    rear=nullptr;
    
    cout<<"Object initialized"<<endl;



  }
  
  void push(int x){
    if(front==nullptr && rear==nullptr){
      Node* newNode=new Node(x);
      rear=newNode;
      front=newNode;
      
      currSize++;
      cout<<newNode->data<<"  :Added"<<endl;
      return;
      
    }
    Node* newNode=new Node(x);
    rear->next=newNode;
    rear=newNode;

   
    cout<<newNode->data<<"  :Added"<<endl;
    currSize++;

    
  }
  void pop(){
    if(front==nullptr && rear==nullptr){
      cout<<"Queue is empty"<<endl;
      return;
    }
    cout<<front->data<<"  :DELETED"<<endl;
    front=front->next;
   
     

    
    currSize--;
  }
  void size(){
    cout<<currSize<<endl;

  }
  

};


int32_t main() {
  QUEUE obj;

  obj.push(1);
  obj.push(0);
  obj.push(1);
  obj.push(0);
  obj.push(2);
  obj.push(0);
  obj.push(0);
  obj.push(7);
  obj.push(101);
  obj.push(101);
  obj.pop();
  obj.pop();
  obj.size();


  return 0;
    
}