#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of
 * two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the lowest common ancestor node of the
 * two given nodes, NULL if no common ancestor was found
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *anc, *desc;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	anc = first->parent, desc = second->parent;
	if (first == desc || !anc || (!anc->parent && desc))
		return (binary_trees_ancestor(first, desc));
	else if (anc == second || !desc || (!desc->parent && anc))
		return (binary_trees_ancestor(anc, second));
	return (binary_trees_ancestor(anc, desc));
}
