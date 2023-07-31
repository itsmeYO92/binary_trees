#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse a binary tree in preorder mode
 * @tree: tree to traverse
 * @func: ponter to a function to apply to the node
*/


void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
