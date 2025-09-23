// Pointer to pointer

#include<iostream>
using namespace std;

int main(){
  int x = 454;
  int *ptr;
  int **pptr;

  ptr = &x;
  pptr = &ptr;

  cout << "Value of x: "<< x << endl;
  cout << "Value at *ptr: " << *ptr << endl;
  cout  << "Value at **pptr: " << **pptr << endl;
}