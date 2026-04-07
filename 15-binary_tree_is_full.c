#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is full,  0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_size(tree) % 2 == 0)
		return (0);
	return (1);
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure its size
 *
 * Return: the size of the tree, or 0 if NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
	}
	return (0);
}
