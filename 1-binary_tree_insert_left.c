#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child
 * of another node.
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node
 * NULL if failure or if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left;

	new_left = malloc(sizeof(binary_tree_t));
	if (new_left == NULL)
		return (NULL);

	new_left->n = value;
	new_left->parent = parent;
	new_left->left = NULL;
	new_left->right = NULL;

	return (new_left);
}
