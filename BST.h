#pragma once
#include "BSTnode.h"
class BST
{
private:
    //tree root
    BSTnode * root;
public:
    //getter for root
    BSTnode* GetRoot();
    //tree constructor from array
    BST(double arr[], int size);
    //method to insert new value into tee
    void Insert(double data);
    //prints values from tree in order
    void InOrderTraversal(BSTnode* node);
    //find a value in the tree
    BSTnode* Find(double value);
};

