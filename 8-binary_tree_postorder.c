#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_postorder - This function takes a
*		binary and print it in pre-order.
* @tree: The binary tree.
* @func: the print function
*
* Return: one if the node is a root and zero if it is null.
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
    func(tree->n);
}
