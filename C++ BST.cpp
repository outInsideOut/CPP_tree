#include "BST.h"

int main()
{
    double array[] = { 2, 4, 7, 8, 9, 3, 5, 1, 7 };
    BST * tree = new BST(array, 9);

    tree->InOrderTraversal(tree->GetRoot());

    tree->Find(4);

    tree->Find(100);

    delete tree;
}

