#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * *binary_tree_insert_right - This function takes a
 *		binary tree and returns a pointer to it.
 * @parent: The binary tree.
 * @value: The value of the binary tree.
 * Return: A pointer to the binary tree.
 */

 binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
 {
	binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	binary_tree_t *formal_right_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
    new_node->right = NULL;

	if (new_node->right != NULL)
	{
		formal_right_node = parent->right;
		parent->right = new_node;
		new_node->right = formal_right_node;
	}
	else
	{
		parent->right = new_node;
	}

	return (new_node);
 }