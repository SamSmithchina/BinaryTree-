/*
Time： 2018-09-06 16:31:21，
Description： In this file, I will define a binary tree struct and traversing it base on three prioritization(boot_first, boot_middle, boot_last).
So it's a easy but primary practice for  me. And I will try to pragram and complete the Huffman Compression theory. Hope I can Enjoy it .

*/

#ifndef __BINARYTREE_H__
#define __BINARYTREE_H__
#include <iostream>
#include <string>

class TreeNode
{
	//
	//member
	//
public:
	int iOrder; //iOrder show the order in the width of tree, which from top to floor and from left to right.
	int iWeight;
	char chWords[81];
	std::string HuffmanCodes;
};

class BinaryTree:public TreeNode
{
	//
	//member
	//
private:
	TreeNode* ptrRoot = NULL;
	TreeNode* ptrLeftTree = NULL;
	TreeNode* ptrRightTree = NULL;

	//
	//function 
	//
public:
	
	//Constructor
	BinaryTree()
	{
		ptrRoot = NULL;
		ptrLeftTree = NULL;
		ptrRightTree = NULL;
	}

	//Constructor
	//parameters : strOrigin be used to bulid a binary tree ,recording tree nodes' data member
	BinaryTree(std::string strOrigin);

	//Destructor
	~BinaryTree();


	//using recursion to traversing binary tree in boost_first order 
	//parameter : a pointer to point a node
	void RootFirst(TreeNode* ptrNode);

	//using recursion to traversing binary tree in boost_first order 
	//parameter : ptrNode(a pointer to point tree node)
	void RootMiddle(TreeNode* ptrNode);

	//using recursion to traversing binary tree in boost_first order 
	//parameter : a pointer to point a node
	void RootLast(TreeNode* ptrNode);

	

};

#endif