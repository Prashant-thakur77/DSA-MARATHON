#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;Node* next;
    Node(int val) : data(val), next(nullptr) {}
};
class LinkedList {
private:
    Node* head;
public:
    LinkedList() : head(nullptr) {}
    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;}
        Node* temp = head;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void deleteByValue(int val) {
        if (!head) return;
        if (head->data == val) {
            Node* toDelete = head;
            head = head->next;
            delete toDelete;
            return;}
        Node* temp = head;
        while (temp->next && temp->next->data != val) {
            temp = temp->next;}
        if (temp->next) {
            Node* toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete; }
    }
    void display() {
        if (!head) {
            cout << "List is empty.\n";
            return;
        }
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL\n";}
};
int main() {
    LinkedList list;
    int choice, value;
    cout<<"24BCS085"<<endl;
     do {
        cout << "\n---- Menu ----\n";
        cout << "1. Insert at end\n";
        cout << "2. Delete by value\n";
        cout << "3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                list.insertAtEnd(value);
                list.display();
                break;
            case 2:
                cout << "Enter value to delete: ";
                cin >> value;
                list.deleteByValue(value);
                list.display();
                break;
            case 3:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 3);
    return 0;
}
