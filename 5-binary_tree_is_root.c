#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
* binary_tree_is_root - This function takes a
*		binary and check if it is a root.
* @node: The binary tree.
*
* Return: one if the node is a root and zero if it is null.
*/

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->parent == NULL)
	{
		return (1);
	}

	return (0);
}
