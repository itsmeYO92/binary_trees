#include "binary_trees.h"

/**
 * binary_tree_leaves - measures the leaves of abinary tree
 * @tree: pointer to the root of the tree to measure
 * Return: the size of the tree
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t c = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		c = 1;
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right) + c);
}
