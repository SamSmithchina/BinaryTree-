#include "TreeStack.h"

TreeStack::~TreeStack()
{
	delete[] ptrTNStack;
	iSize = 0;
	stackTop = -1;
	stackBase = -1;
}

TreeStack::TreeStack()
{
	iSize = INCREMENT;
	ptrTNStack = new TreeNode[iSize];
	if (NULL == ptrTNStack)
	{
		std::cout << "Apply for memory failed " << std::endl;
		exit(1);
	}
	stackBase = -1;
	stackTop = -1;
}

void TreeStack::Push(TreeNode TNode)
{
	if
}