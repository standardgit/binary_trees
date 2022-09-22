#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_preorder - This function takes a
*		binary and print it in pre-order.
* @tree: The binary tree.
* @func: the print function
*
* Return: one if the node is a root and zero if it is null.
*/

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	func(tree->n);

	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
