#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mod 1000000007

class QUEUE{
  public:
  int *arr;
  int n;
  int currSize=0;
  int front;
  int rear;
  QUEUE(int c){
    front=-1;
    rear=-1;
    n=c;
    arr=new int[n];
    cout<<"Object initialized"<<endl;



  }
  
  void push(int x){
    if(front==-1 && rear==-1){
      front=0;
      rear=0;
      arr[rear]=x;
      
    }
    else if(front==(rear+1)%n){
      cout<<"Queue is Full"<<endl;
      return;
    }
    else {
      rear=(rear+1)%n;
      arr[rear]=x;

    }
    cout<<arr[rear]<<"  :Added"<<endl;
    currSize++;

    
  }
  void pop(){
    if(front==-1 && rear==-1){
      cout<<"Queue is empty"<<endl;
      return;
    }
    else if(front==rear){
      cout<<arr[front]<<"  :DELETED"<<endl;
      front=-1;
      rear=-1;
      
    }
    else{
      cout<<arr[front]<<"  :DELETED"<<endl;
      front=(front+1)%n;


    }
    currSize--;
  }
  void size(){
    cout<<currSize<<endl;

  }
  

};


int32_t main() {
  QUEUE obj(5);

  obj.push(5);
  obj.push(3);
  obj.push(2);
  obj.push(1);
  obj.pop();
  obj.pop();
  obj.size();


  return 0;
    
}