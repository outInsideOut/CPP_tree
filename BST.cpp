#include "BST.h"
#include <iterator>
#include <iostream>
BST::BST(double arr[], int size) {
	for (int i = 0; i < size; i++) {
		Insert(arr[i]);
	}
}
//returns BST root node
BSTnode * BST::GetRoot() {
	return root;
}
void BST::Insert(double data) {
	if (root == nullptr) {
		root = new BSTnode(data);
	}
	else {
		root->Insert(data);
	}
}
void BST::InOrderTraversal(BSTnode* node) {
	if (node == nullptr)
		return;
	InOrderTraversal(node->GetLeft());
	std::cout << node->GetData() << " ";
	InOrderTraversal(node->GetRight());
};
BSTnode* BST::Find(double value) {
	//create temporary bstnode pointer
	BSTnode* temp = new BSTnode(NULL);
	temp = root->Find(value);
	if (temp == nullptr) {
		std::cout << std::endl << value << " not found" << std::endl;
	}
	else {
		std::cout << std::endl << value << " found" << std::endl;
	}
	
	return temp;
}