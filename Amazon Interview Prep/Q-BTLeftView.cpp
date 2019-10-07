#include <iostream>

struct Node{
    Node* left;
    Node* right;
    int value;
};

Node* addNode(int val)
{
    Node* temp = new Node;
    temp->left = temp->right = nullptr;
    temp->value = val;
    return temp;

}

void leftViewBTUtil(Node* root, int level, int* max_level)
{
    if(root == nullptr)
        return;

    if (*max_level < level) {
        std::cout << root->value << '\t';
        *max_level = level;
    }

    leftViewBTUtil(root->left, level+1, max_level);
    leftViewBTUtil(root->right, level+1, max_level);
}

void leftView(Node* root)
{
    int max_level = 0;
    leftViewBTUtil(root, 1, &max_level);
}


int main()
{

    Node* root = addNode(12);
    root->right = addNode(30);
    root->left = addNode(10);
    root->right->right = addNode(40);
    root->right->left = addNode(25);

    leftView(root);
}
