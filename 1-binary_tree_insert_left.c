#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * *binary_tree_insert_left - This function takes a
 *		binary tree and returns a pointer to it.
 * @parent: The binary tree.
 * @value: The value of the binary tree.
 * Return: A pointer to the binary tree.
 */


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	binary_tree_t *formal_left_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->left != NULL)
	{
		formal_left_node = parent->left;
		parent->left = new_node;
		new_node->left = formal_left_node;
	}

	parent->left = new_node;

	return (new_node);
}
