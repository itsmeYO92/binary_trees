#include "binary_trees.h"


/**
 * binary_tree_insert_left - insert a node as the left child
 * @parent: parent node to insert into
 * @value: value of the new node
 * Return: a pointer to the created node or NULL on failure or parent is NULL
*/


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node = malloc(sizeof(binary_tree_t));

	if (!new_left_node || !parent)
	{
		free(new_left_node);
		return (NULL);
	}

	new_left_node->n = value;
	new_left_node->parent = parent;
	new_left_node->right = NULL;
	new_left_node->left = NULL;

	if (parent->left)
	{
		parent->left->parent = new_left_node;
		new_left_node->left = parent->left;
	}

	parent->left = new_left_node;
	return (new_left_node);

}
