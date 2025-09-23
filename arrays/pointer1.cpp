// Modify the Pointer
#include <iostream>
#include <string>
using namespace std;

int main()
{
  string name = "Puneet";
  string *ptr = &name;

  cout << "Name: " << name << endl;

  cout << "Address of name: " << &name << endl;
  cout << "Address stored in ptr: " << ptr << endl;

  cout << *ptr << endl;

  *ptr = "Rajat";

  cout << "Modified Name: " << name << endl;
  cout << "Address of name: " << ptr << endl;

  *ptr = "Prashant";

  cout << "Modified Name: " << name << endl;
  cout << "Address of name: " << ptr << endl;
}