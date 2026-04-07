#include "binary_trees.h"

/**
 * binary_tree_balance - measure the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure balance factor
 *
 * Return: balance factor of the tree. if tree is NULL return 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return ((binary_tree_height(tree->left) - binary_tree_height(tree->right)));
}


/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: root node of the tree you want to measure height of.
 *
 * Return: height of tree, if tree is NULL return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree != NULL)
	{
		if (tree->left != NULL)
		{
			left_height = binary_tree_height(tree->left) + 1;
		}
		else
		{
			left_height = 1;
		}
		if (tree->right != NULL)
		{
			right_height = binary_tree_height(tree->right) + 1;
		}
		else
		{
			right_height = 1;
		}
		if (left_height > right_height)
			return (left_height);
		return (right_height);
	}
	return (0);
}
