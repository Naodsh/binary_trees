#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: Pointer to the root node of the tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Return: void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);  /* Call the function for the current node */
	binary_tree_preorder(tree->left, func); /* Recursiv traverse left */
	binary_tree_preorder(tree->right, func); /* Recursiv traverse right */
}
