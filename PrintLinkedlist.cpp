#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    
    Node(int val) {  
        data = val;
        next = nullptr;
    }
};

void printLinkedList(Node* head) {
    Node* current = head;  
    while (current != nullptr) {
        cout << current->data << " ";  
        current = current->next;  
    }
    cout << endl; 
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    
    printLinkedList(head);
    
    return 0;
}
