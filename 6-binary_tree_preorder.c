#include "binary_trees.h"

/**
 * binary_tree_preorder - Reads a binary tree using pre-rder traversal.
 *
 * @tree: Pointer to root node of the tree to traverse.
 * @func: Poionter to a function to call for eaeach node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
