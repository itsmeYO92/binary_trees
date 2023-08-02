#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure
 * Return: the depth of the node or 0 if NULL
*/


size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *current;

	if (!tree)
		return (0);

	current = tree;
	while (current->parent)
	{
		depth++;
		current = current->parent;
	}

	return (depth);
}
