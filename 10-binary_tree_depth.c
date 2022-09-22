#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the height of a binary tree
 *
 * @tree: Pointer to the node to measures the height
 *
 * Return: The height of the tree starting at @node
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_l;

	if (tree == NULL)
	{
		return (0);
	}

	depth_l = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
	return (depth_l);
}
