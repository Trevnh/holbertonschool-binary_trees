#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child of another
 * node if parent already has a left child, new node will take its place and
 * old right child will be new node's right child.
 * @parent: parent of the node to insert right child in
 * @value: value of the new node
 *
 * Return: Pointer to new node or NULL on failure or NULL parent.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = parent->right;
	parent->right = node;
	if (node->right != NULL)
		node->right->parent = node;
	return (node);
}
