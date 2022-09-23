#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - Measures the size of a binary tree
 *
 * @tree: Pointer to the node that measures the size
 *
 * Return: The size of the tree starting at @node
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_n;
	size_t right_n;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	left_n = binary_tree_nodes(tree->left);
	right_n = binary_tree_nodes(tree->right);
	return (left_n + right_n + 1);
}
