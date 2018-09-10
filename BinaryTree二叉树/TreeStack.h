#ifndef __TREESTACK_H__
#define __TREESTACK_H--

#include "BinaryTree.h"

#define INCREMENT 20;

class TreeStack
{
	//
	//member
	//
private:
	TreeNode* ptrTNStack;
	int iSize;
	int stackTop;
	int stackBase;

		//
		//function
		//
public:

	TreeStack();
	~TreeStack();

	// pop the top elememt int the  stack,and return it;
	TreeNode Pop();

	// push a tree node into the stack ;if it's falis,try to remind me ;
	void Push(TreeNode TNode);


};

#endif