#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * *binary_tree_node - This function takes a
 *		binary tree and returns a pointer to it.
 * @parent: The binary tree.
 * @value: The value of the binary tree.
 * Return: A pointer to the binary tree.
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->n = value;
	temp->parent = parent;
	temp->left = NULL;
	temp->right = NULL;

	return (temp);
}
