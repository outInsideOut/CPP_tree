#pragma once
class BSTnode
{
private:
	double data;
	BSTnode* leftNode;
	BSTnode* rightNode;
	int sortedIndex;
public:
	BSTnode(double value);
	double GetData();
	BSTnode* GetLeft();
	BSTnode* GetRight();
	void Insert(double value);
	BSTnode* Find(double value);
};

