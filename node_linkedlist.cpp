#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) : data(value), next(nullptr) {}
};

void insertAtBeginning(Node* &head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    insertAtBeginning(head, 5);
    insertAtBeginning(head, 10);
    insertAtBeginning(head, 15);

    cout << "Linked List after insertions: ";
    printList(head);

    return 0;
}
