#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to th root node of the tree
 *
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
	{
		left_height = binary_tree_height(tree->left) + 1;
		right_height = binary_tree_height(tree->right) + 1;
	}

	if (left_height > right_height)
		return (left_height);

	else
		return (right_height);

	return (0);
}
