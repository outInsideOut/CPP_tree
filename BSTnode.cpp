#include "BSTnode.h"

BSTnode::BSTnode(double value) {
	data = value;
	leftNode = nullptr;
	rightNode = nullptr;
}
double BSTnode::GetData() {
	return data;
}
BSTnode* BSTnode::GetLeft(){
	return leftNode;
}
BSTnode* BSTnode::GetRight() {
	return rightNode;
}
void BSTnode::Insert(double value) {

	if (value >= data) {
		if (rightNode == nullptr) {
			rightNode = new BSTnode(value);
		}
		else {
			rightNode->Insert(value);
		}
	}
	else {
		if (leftNode == nullptr) {
			leftNode = new BSTnode(value);
		}
		else {
			leftNode->Insert(value);
		}
	}
}
BSTnode* BSTnode::Find(double value) {
	if (this == nullptr) {
		return nullptr;
	}
	if (data == value) {
		return this;
	}
	else if (data < value) {
		rightNode->Find(value);
	}
	else if (data > value) {
		leftNode->Find(value);
	}
}