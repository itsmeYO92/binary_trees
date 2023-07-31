#include "binary_trees.h"

/**
 * binary_tree_node - create a binary tree node
 * @parent: a pointer to the parent of the node to create
 * @value: value of the node to create
 * Return: a pointer to the created node or NULL on failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;

	return (new_node);
}
