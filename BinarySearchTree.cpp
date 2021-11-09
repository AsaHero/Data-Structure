#include <iostream>

using namespace std;

class Node
{
public:

    int key;
    Node* leftNode;
    Node* rightNode;
    Node(int key)
    {
        this->key = key;
        leftNode = rightNode = nullptr;
    }
};

class BinaryTree
{
private:
    Node* root;

    void inserter(Node* root, int key)
    {
        if (root->leftNode == nullptr && key < root->key)
        {
            root->leftNode = new Node(key);
        }
        else if(root->rightNode == nullptr && key > root->key)
        {
            root->rightNode = new Node(key);
        }        
        else if(key < root->key)
        {
            inserter(root->leftNode, key);
        }
        else
            inserter(root->rightNode, key);
    }

public:

    BinaryTree()
    {
        root = nullptr;
    }

    void insert(int key)
    {
        if(root == nullptr)
            root = new Node(key);
        else
            inserter(root, key);        
    }

    Node* getRoot()
    {
        return root;
    }

    void inorder(Node* root)
    {
        if (root != nullptr)
        {
            inorder(root->leftNode);
            std::cout << root->key << " -> ";
            inorder(root->rightNode);
        }

    }


    void preorder(Node* root)
    {
        if (root != nullptr)
        {
            std::cout << root->key << " -> ";
            inorder(root->leftNode);
            inorder(root->rightNode);
        }

    }


    void postorder(Node* root)
    {
        if (root != nullptr)
        {
            inorder(root->leftNode);
            inorder(root->rightNode);
            std::cout << root->key << " -> ";
        }
 
    }


};



int main()
{
    BinaryTree tree;

    tree.insert(10);
    tree.insert(15);
    tree.insert(5);
    tree.insert(2);
    tree.insert(16);

    tree.preorder(tree.getRoot());

    return 0;
}