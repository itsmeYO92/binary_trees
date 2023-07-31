#include "binary_trees.h"


/**
 * binary_tree_insert_right- insert a node as the right child
 * @parent: parent node to insert into
 * @value: value of the new node
 * Return: a pointer to the created node or NULL on failure or parent is NULL
*/


binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_node = malloc(sizeof(binary_tree_t));

	if (!new_right_node || !parent)
	{
		free(new_right_node);
		return (NULL);
	}

	new_right_node->n = value;
	new_right_node->parent = parent;
	new_right_node->right = NULL;
	new_right_node->left = NULL;

	if (parent->right)
	{
		parent->right->parent = new_right_node;
		new_right_node->right = parent->right;
	}

	parent->right = new_right_node;
	return (new_right_node);

}
