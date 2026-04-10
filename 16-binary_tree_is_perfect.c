#include "binary_trees.h"

/**
 * depth_check - measure depth of a node in binary tree
 * @tree: pointer to node to check depth
 *
 * Return: depth of the tree
 */
size_t depth_check(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);
	left = depth_check(tree->left);
	right = depth_check(tree->right);

	return (1 + (left > right ? left : right));
}

/**
 * is_perfect_recursion - Recursive function to check if binary tree is perfect
 * @tree: pointer to node to check
 * @depth: depth of tree.
 *
 * Return: 1 if tree is perfect, 0 otherwise
 */
int is_perfect_recursion(const binary_tree_t *tree, size_t depth)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (depth == 1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect_recursion(tree->left, depth - 1)
	&& is_perfect_recursion(tree->right, depth - 1));
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to the root of tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t d = depth_check(tree);

	return (is_perfect_recursion(tree, d));
}
