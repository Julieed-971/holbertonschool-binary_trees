#include "binary_trees.h"

/**
 * binary_trees_ancestor - find the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: pointer to the lowers common ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *ancestor_1, *ancestor_2;

	if (first == second)
		return ((binary_tree_t *)(first));
	if (!first || !second || !first->parent || !second->parent)
		return (NULL);
	if (first->parent == second->parent)
	{
		return (first->parent);
	}
	else if (first->parent == second)
	{
		return ((binary_tree_t *)(second));
	}
	else if (second->parent == first)
	{
		return ((binary_tree_t *)(first));
	}
	else if (first->parent != second->parent)
	{
		ancestor_1 = binary_trees_ancestor(first, second->parent);
		ancestor_2 = binary_trees_ancestor(second, first->parent);
		if (ancestor_1)
			return (ancestor_1);
		return (ancestor_2);
	}
	return (NULL);
}
