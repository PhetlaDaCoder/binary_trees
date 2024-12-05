#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of another node.
 * @parent: Poionter to node to insert the left-child in.
 * @value: Value to store in the new node.
 *
 * Return: Pointer to new node or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new ->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = new;
	if (new->left)
		new->left->parent = new;
	return (new);
}
