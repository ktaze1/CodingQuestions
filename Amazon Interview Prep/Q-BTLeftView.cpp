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

void leftViewBTUtil(Node* root, int level, int* maxLevel)
{
    if(root == nullptr)
        return;

    if (*maxLevel < level) {
        std::cout << root->value << '\t';
        *maxLevel = level;
    }

    leftViewBTUtil(root->left, level+1, maxLevel);
    leftViewBTUtil(root->right, level+1, maxLevel);
}

void leftView(Node* root)
{
    int maxLevel = 0;
    leftViewBTUtil(root, 1, &maxLevel);
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


/*

                12
             10    30
->              25    40

*/