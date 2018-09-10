#include "BinaryTree.h"
#include <iostream>
#include <string>

// using incoming parameters--strOrigin to bulid a binary tree ,recording tree nodes' data member
BinaryTree::BinaryTree(std::string strOrigin)
{
	

}

//distructor
BinaryTree::~BinaryTree()
{
	if (NULL != ptrRoot)
	{
		free(ptrRoot);
	}
	if (NULL != ptrLeftTree)
	{
		free(ptrLeftTree);
	}
	if (NULL != ptrRightTree)
	{
		free(ptrRightTree);
	}
}

//using recursion to traversing binary tree in boost_first order 
//parameter : a pointer to point a node
void BinaryTree::RootFirst(TreeNode* ptrNode)
{
	if (NULL != ptrNode)
	{
		std::cout << "[ " << ptrNode->chWords << " , "
			<< ptrNode->iWeight << " ] " << " -- >";
		if (NULL != ptrLeftTree)
		{
			RootFirst(ptrLeftTree);
		}

		if (NULL != ptrRightTree)
		{
			RootFirst(ptrRightTree);
		}
	}
}

//using recursion to traversing binary tree in boost_first order 
//parameter : a pointer to point a node
void BinaryTree::RootMiddle(TreeNode* ptrNode)
{
	if (NULL != ptrNode)
	{

		if (NULL != ptrLeftTree)
		{
			RootFirst(ptrLeftTree);
		}
		std::cout << "[ " << ptrNode->chWords << " , "
			<< ptrNode->iWeight << " ] " << " -- >";
		if (NULL != ptrRightTree)
		{
			RootFirst(ptrRightTree);
		}
	}
}

//using recursion to traversing binary tree in boost_first order 
//parameter : a pointer to point a node
void BinaryTree::RootLast(TreeNode* ptrNode)
{
	if (NULL != ptrNode)
	{

		if (NULL != ptrLeftTree)
		{
			RootFirst(ptrLeftTree);
		}

		if (NULL != ptrRightTree)
		{
			RootFirst(ptrRightTree);
		}
		std::cout << "[ " << ptrNode->chWords << " , "
			<< ptrNode->iWeight << " ] " << " -- >";
	}
}