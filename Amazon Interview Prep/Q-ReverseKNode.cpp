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

        /* k = 2
        head>1>2>3>4>5
        
        next=null, prev=null; current=1;
        1-)     next = 2; prev=null; current=1;
        2-)     current->next
        */
    }
    
    if(next != nullptr)
        root->next = reverse(next, k);

    return prev;
}

void push(Node** root_ref, int data)
{
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = (*root_ref);
    (*root_ref) = new_node;
}

void printList(Node *node)  
{  
    while (node != NULL)  
    {  
        std::cout<<node->data<<" ";  
        node = node->next;  
    }  
}  

int main()  
{  
    Node* head = NULL;  
  
    push(&head, 9);  
    push(&head, 8);  
    push(&head, 7);  
    push(&head, 6);  
    push(&head, 5);  
    push(&head, 4);  
    push(&head, 3);  
    push(&head, 2);  
    push(&head, 1);      

    std::cout<<"Given linked list \n";  
    printList(head);  
    head = reverse(head, 3);  
  
    std::cout<<"\nReversed Linked list \n";  
    printList(head);  
  
  
    return(0);  
}  