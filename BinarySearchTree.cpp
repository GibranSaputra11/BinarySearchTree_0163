#include <iostream>
using namespace std;

class Node
{
public: 
    int info;
    Node *leftchild;
    Node *rightchild;

    // Contruktor untuk class node
    Node()
    {
        leftchild = nullopt; // Initialize left child to null
        rightchild = nullopt; // Initialize right child to null
    }
};