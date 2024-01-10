#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to th root node of the tree
 *
 * Return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (binary_tree_height(tree->left) > binary_tree_height(tree->right))
		return (1 + binary_tree_height(tree->left));
	else
		return (1 + binary_tree_height(tree->right));
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to th root node of the tree
 *
 * Return: balance of the tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) -
			binary_tree_height(tree->right));
}
