#include <iostream>

class Node {
public:
    int data;
    Node* next;
};

Node* reverse (Node *root, int k)
{
    Node* current = root;
    Node* next = nullptr;
    Node* prev = nullptr;
    int count = 0;

    while(current != nullptr && count < k ){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
}