#include <iostream>

struct Node {
    int data;
    Node* next;
};

//helper functions
void push(Node** root_ref, int newData)
{
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = (*root_ref);
    (*root_ref) = newNode;
}

void printList(Node* node)
{
    while(node != nullptr){
        std::cout << node->data;
        node = node->next;
    }
    std::cout << std::endl;
}

void swapPointer(Node** a, Node** b)
{
    Node* temp = *a;
    *a = *b;
    *b = temp;
}

int getSize(Node* root)
{
    int size = 0;
    while(root != nullptr){
        root = root->next;
        size++;
    }
    return size;
}

//addtion with same length
Node* addSameSize(Node* root1, Node* root2, int* carry)
{
    if (root1 == nullptr)
        return nullptr;
    
    int sum;

    Node* result = new Node();

    result->next = addSameSize(root1->next, root2->next, carry);

    sum = root1->data + root2->data + *carry;
    *carry = sum / 10;
    sum = sum % 10;

    result->data = sum;
    return result;
}