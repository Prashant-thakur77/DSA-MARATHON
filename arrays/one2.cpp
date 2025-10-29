#include <iostream>
using namespace std;

class Parent {
public:
    void showParent() {
        cout << "This is the Parent class" << endl;
    }
};

class Child : public Parent {
public:
    void showChild() {
        cout << "This is the Child class" << endl;
    }
};

int main() {
    Child obj;
    obj.showParent();
    obj.showChild();
    return 0;
}
