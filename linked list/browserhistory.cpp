#include <bits/stdc++.h>
using namespace std;

class Node{
  public:
  string data;
  Node* next;
  Node*back;

 

  Node(){
    data="";
    next=nullptr;
    back=nullptr;


  }
  Node(string data1){
    data=data1;
    next=nullptr;
    back=nullptr;
  }
  Node(string data1,Node*next1,Node*back1){
    data=data1;
    next=next1;
    back=back1;
  }




};

class BrowserHistory {
public:
    Node*current;
    BrowserHistory(string homepage) {
        current=new Node(homepage);
        
        
    }
    
    void visit(string url) {
        Node* temp = current->next;
        while (temp) {
          Node* toDelete = temp;
          temp = temp->next;
          delete toDelete;
        }
    current->next = nullptr;
         Node*newNode=new Node(url);
         current->next=newNode;
         newNode->back=current;
         current=newNode;


        
    }
    
    string back(int steps) {
        while(steps--){
            if(current->back)current=current->back;
            else break;
           
        }
        return current->data;
        
    }
    
    string forward(int steps) {
        while(steps--){
            if(current->next)current=current->next;
            else break;
            
        }
        return current->data;
        
    }
};

int main() {
    BrowserHistory bh("leetcode.com");//bh is the instance of class (object name)
    bh.visit("google.com");
    bh.visit("facebook.com");
    bh.visit("youtube.com");
    cout << bh.back(1) << endl;     // facebook.com
    cout << bh.back(1) << endl;     // google.com
    cout << bh.forward(1) << endl;  // facebook.com
    bh.visit("linkedin.com");       // forward history cleared
    cout << bh.forward(2) << endl;  // linkedin.com
    cout << bh.back(2) << endl;     // google.com
    cout << bh.back(7) << endl;     // leetcode.com
}
