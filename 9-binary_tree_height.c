#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of abinary tree
 * @tree: tree to measure
 * Return: the height of the binary tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	int height_left = 0, height_right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		height_left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		height_right = 1 + binary_tree_height(tree->right);
	return (height_left > height_right ? height_left : height_right);
}
