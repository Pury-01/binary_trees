#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using
 * pre-order traversal
 *
 * @tree: pointer to the root node of the tree traverse
 * @func: pointer to a function to call for each node where
 * value in the node is passed as a parameter to that function
 *
 * Return: nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	/* call function on current node value */
	func(tree->n);

	/* traverse left side */
	binary_tree_preorder(tree->left, func);

	/*traverse right side */
	binary_tree_preorder(tree->right, func);
}
