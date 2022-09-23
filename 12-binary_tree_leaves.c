#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_leaves - Measures the size of a binary tree
 *
 * @tree: Pointer to the node that measures the size
 *
 * Return: The size of the tree starting at @node
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_l;
	size_t right_l;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	left_l = binary_tree_leaves(tree->left);
	right_l = binary_tree_leaves(tree->right);
	return (left_l + right_l);
}
