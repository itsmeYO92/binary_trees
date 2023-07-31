#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if a node is leaf or not
 * @node: nodeto check
 *Return: 1 if the node is leaf 0 otherwise
*/


int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	return (!node->left && !node->right);

}
